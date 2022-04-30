#include "konyvtar.h"

#include "memtrace.h"


Konyvtar::Konyvtar(int kapacitas) : kapacitas(kapacitas) {
    pData = new Konyv * [kapacitas];
    size = 0;
}


Konyvtar::Konyvtar(const char* filename, int kapacitas): pData(new Konyv*[kapacitas]), size(0), kapacitas(kapacitas) {
    std::ifstream file(filename);
    if (file.is_open()) {
        while (!file.eof()) {
            String tipus;
            file >> tipus;
            if(tipus == "Konyv"){
                Konyv* k = new Konyv(file);
                add(k);
            }
            else if(tipus == "Kalandkonyv"){
                Kalandkonyv* k = new Kalandkonyv(file);
                add(k);
            }
            else if(tipus == "Szepirodalmi"){
                Szepirodalmi* k = new Szepirodalmi(file);
                add(k);
            }
            else if(strcmp(tipus.c_str(), "\n") == 0){
                throw "Hibas tipus!";
            }
        }
        file.close();
    }
}

void Konyvtar::add(Konyv* k) {
        if (size < kapacitas) {
            pData[size++] = k;
        }
        else
            throw "A konyvtar megtelt!";
}



void Konyvtar::remove(int index) {
        if (index < size) {
            delete pData[index];
            pData[index] = pData[size - 1];
            size--;
        }
        else
            throw "A konyvtarban nincs ilyen indexu elem!";
}

void Konyvtar::remove(const String& cim) {
        for (int i = 0; i < size; i++) {
            if (pData[i]->getCim() == cim) {
                remove(i);
                return;
            }
        }
        throw "A konyvtarban nincs ilyen cimu elem!";
}

void Konyvtar::print(std::ostream& os) const{
    for(int i = 0; i < size; i++){
        pData[i]->kiir(os);
    }
}

bool Konyvtar::printFile(const char* filename) const{
    std::ofstream f(filename);
    if(f)
        print(f);
    else
        return false;
    f.close();
    return true;
}


int Konyvtar::getSize() const{
    return kapacitas;
}

Konyvtar::~Konyvtar() {
    for (int i = 0; i < size; i++) {
        delete pData[i];
    }
    delete[] pData;
}

Konyv* Konyvtar::operator[] (int index) const {
    if (index < size)
        return pData[index];
    else
        throw "A konyvtarban nincs ilyen indexu elem!";
}

bool Konyvtar::operator==(const Konyvtar& kt) const {
    if (size != kt.size)
        return false;
    for (int i = 0; i < size; i++) {
        if (!(*pData[i] == *kt[i]))
            return false;
    }
    return true;
}

bool compareABC(Konyv const* k1, Konyv const* k2){
    return strcmp((k1->getCim()).c_str(), (k2->getCim()).c_str()) > 0;
}

bool compareYear(Konyv const* k1, Konyv const* k2){
    return k1->getEv() > k2->getEv();
}

bool comparePages(Konyv const* k1, Konyv const* k2){
    return k1->getOldalszam() > k2->getOldalszam();
}
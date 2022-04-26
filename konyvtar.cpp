#include "konyvtar.h"

#include "memtrace.h"


Konyvtar::Konyvtar(int kapacitas) : kapacitas(kapacitas) {
    pData = new Konyv * [kapacitas];
    size = 0;
}


Konyvtar::Konyvtar(const Konyvtar& kt) : kapacitas(kt.kapacitas) {
    pData = new Konyv*[kapacitas];
    size = 0;
    for (int i = 0; i < kt.size; i++) {
        pData[i] = new Konyv(*(kt[i]));
    }
}

Konyvtar::Konyvtar(char* filename, int kapacitas): pData(new Konyv*[0]), size(0), kapacitas(kapacitas) {
    std::cout << "debug" << std::endl;
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

void Konyvtar::sortABC() {};
void Konyvtar::sortPages() {};
void Konyvtar::sortYear() {};


#ifndef KONYVTAR_H
#define KONYVTAR_H



#include <iostream>

#include "string5.h"
#include "konyv.h"

#include "memtrace.h"

class Konyvtar {
    Konyv** pData;
    int size;
    const int kapacitas;
public:
    /**
     * Konstruktor.
     * @param kapacitas A könyvtar kapacitása.
     */
    Konyvtar(int);


    
    /**
     * @brief Beolvas egy lemetett könyvtárat egy szöveges fileból.
     * 
     * @param filename - a file neve.
    */
    Konyvtar(const char* filename, int kapacitas);


    /**
     * @brief Hozzáad egy könyvet a könyvtarhoz.
     * 
     * @param k - hozzáadandó könyv.
     */
    void add(Konyv* k);

    /**
     * @brief Eltávolít egy könyvet a könyvtarból, index alapján.
     * 
     * @param index - az eltávolítandó könyv indexe.
     */
    void remove(int index);


    /**
     * @brief Eltávolít egy könyvet a könyvtarból, cím alapján.
     * 
     * @param cim - az eltávolítandó könyv címe.
     */
    void remove(const String& cim);

    /**
     * @brief Kiírja a könyvtar tartalmát tetszőleges std::ostream& objektumba.
     */
    void print(std::ostream&) const;

    /**
     * @brief Kiírja a könyvtar tartalmát egy fileba.
     * 
     * @param filename - a fájl neve.
     * @return true - ha sikeresen kiírta a fileba.
     * @return false - ha nem sikerült kiírni a fileba.
     */
    bool printFile(const char* filename) const;

    /**
     * @brief Visszaadja a könyvtár jelenlegi kapacitását
     * 
     * @return int - a kapacitás
     */
    int getSize() const;


    /**
     * @brief Destruktor.
     */
    ~Konyvtar();

    /**
     * @brief Index alapján visszaad egy könyvet.
     * 
     * @param index 
     * @return Konyv* - a könyvre mutató pointer.
     */
    Konyv* operator[](const int index) const;

    /**
     * @brief Egyenlőség operátor könyvtárakra, a könyvek sorrendje is számít.
     * 
     * @return true - a két könyvtár megegyezik.
     * 
     * @return false - a két könyvtár nem egyezik.
     */
    bool operator==(const Konyvtar&) const;

    template<typename PRED>
    void sortGEN(PRED func){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if(func(pData[j], pData[j + 1])){
                Konyv* temp = pData[j];
                pData[j] = pData[j+1];
                pData[j+1] = temp;
            }
        }
    }
}
};


bool compareABC(Konyv const* k1, Konyv const* k2);
bool compareYear(Konyv const* k1, Konyv const* k2);
bool comparePages(Konyv const* k1, Konyv const* k2);


#endif
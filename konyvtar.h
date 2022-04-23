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
    Konyvtar(int kapacitas) : kapacitas(kapacitas) {
        pData = new Konyv*[kapacitas];
        size = 0;
    }


    /**
     * @brief Beolvas egy lemetett könyvtárat egy szöveges fileból.
     * 
     * @param filename - a file neve.
     */
    //Konyvtar(char * filename);

    /**
     * @brief Másoló konstruktor, ami a könyvtar adatait másolja.
     * 
     * @param kt - Könyvtar, ami másolódik.
     */
    Konyvtar(const Konyvtar&);

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
};

#endif
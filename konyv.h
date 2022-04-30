#include <iostream>

#include "string5.h"
#include "memtrace.h"


//Ősosztály, ami egy könyv adatait tárolja.
class Konyv {
    String cim; ///< A könyv címe.
    int ev; ///< A könyv kiadásának éve.
    int oldalszam; ///< A könyv oldalainak száma.
public:
    /**
     * Konstruktor.
     * @param cim A könyv címe.
     * @param ev A könyv kiadásának éve.
     * @param oldalszam A könyv oldalainak száma.
     */
    Konyv(const String&, int, int);

    /**
     * @brief Másoló konstruktor, ami a könyv adatait másolja.
     * 
     * @param k - Könyv, ami másolódik.
     */
    Konyv(const Konyv&);

    /**
     * @brief Létrehoz egy könyvet a beolvasott adatok alapján. (egy sorból)
     * 
     */
    Konyv(std::istream&);
    

    /**
     * @brief Getter függvény a könyv címéhez.
     * 
     * @return String - a könyv címe.
     */
    String getCim() const;
    /**
     * @brief Getter függvény a könyv kiadásának évehez.
     * 
     * @return int - a könyv kiadásának éve.
     */
    int getEv() const;
    /**
     * @brief Getter függvény a könyv oldalainak számához.
     * 
     * @return int - a könyv oldalainak száma.
     */
    int getOldalszam() const;


    /**
     * @brief Setter függvény a könyv címéhez.
     * 
     * @param cim - a könyv címe.
     */
    void setCim(const String&);

    /**
     * @brief Setter függvény a könyv kiadásának évehez.
     * 
     * @param ev - a könyv kiadásának éve.
     */
    void setEv(int);

    /**
     * @brief Setter függvény a könyv oldalainak számához.
     * 
     * @param oldalszam - a könyv oldalainak száma.
     */
    void setOldalszam(int);

    /**
     * @brief Kiírja a könyv adatait.
     * 
     * @return standard kimenet a kiírás helye, nincs visszatérési érték.
     */
    virtual void kiir(std::ostream& os) const;


    /**
     * @brief Egyenlőség operátor, leszármazottakban felül kell definiálni.
     * 
     * @return true - a két könyv megegyezik 
     * @return false - a két könyv nem egyezik meg
     */
    virtual bool operator==(const Konyv&) const;

    virtual ~Konyv() {}
};

//A könyv leszármozott osztálya, ami egy kalandkönyv adatait tárolja.
class Kalandkonyv : public Konyv {
    int korhatar; ///< A könyv korhatárát tárolja.
public:

    /**
     * Konstruktor.
     * @param cim A könyv címe.
     * @param ev A könyv kiadásának éve.
     * @param oldalszam A könyv oldalainak száma.
     * @param korhatar A könyv korhatárát tárolja.
     */
    Kalandkonyv(const String& cim, int ev, int oldalszam, int korhatar);

    /**
     * @brief Másoló konstruktor, ami egy kalandkönyv adatait másolja.
     * 
     * @param k - Kalandkonyv, ami másolódik.
     */
    Kalandkonyv(const Kalandkonyv& k);

    /**
     * @brief Létrehoz egy kalandkönyvet a beolvasott adatok alapján. (egy sorból)
     * 
     */
    Kalandkonyv(std::istream&);

    /**
     * @brief Setter függvény a könyv korhatárához.
     * 
     * @param korhatar - a könyv korhatára.
     */
    void setKorhatar(int korhatar);

    /**
     * @brief Getter függvény a könyv korhatárához.
     * 
     * @return int - a könyv korhatára.
     */
    int getKorhatar() const;
    
    /**
     * @brief Kiírja a könyv adatait.
     * 
     * @return standard kimenet a kiírás helye, nincs visszatérési érték.
     */
    void kiir(std::ostream& os) const;

    /**
     * @brief Egyenlőség operátor felüldefiniálása.
     * 
     * @return true - ha egyező a két könyv
     * @return false - ha nem egyező a két könyv
     */
    bool operator==(const Kalandkonyv&) const;
};

//A könyv leszármozott osztálya, ami egy szépirodalmi adatait tárolja.
class Szepirodalmi : public Konyv {
    String leiras; ///< A könyv leírását tárolja.
public:

    /**
     * Konstruktor.
     * @param cim A könyv címe.
     * @param ev A könyv kiadásának éve.
     * @param oldalszam A könyv oldalainak száma.
     * @param leiras A könyv leírását tárolja.
     */
    Szepirodalmi(const String& cim, int ev, int oldalszam, const String& leiras);


    /**
     * @brief Másoló konstruktor, ami egy szepirodalmi mű adatait másolja.
     * 
     * @param s - Szepirodalmi mű, ami másolódik.
     */
    Szepirodalmi(const Szepirodalmi& s);

    /**
     * @brief Létrehoz egy szepirodalmi műt a beolvasott adatok alapján. (egy sorból)
     * 
     */
    Szepirodalmi(std::istream&);


    /**
     * @brief Setter függvény a könyv leírásához.
     * 
     * @param leiras - a könyv leírására.
     */
    void setLeiras(const String& leiras);

    /**
     * @brief Getter függvény a könyv leírásához.
     * 
     * @return String - a könyv leírására.
     */
    String getLeiras() const;

    /**
     * @brief Kiírja a könyv adatait.
     * 
     * @return standard kimenet a kiírás helye, nincs visszatérési érték.
     */
    void kiir(std::ostream& os) const;

    /**
     * @brief Egyenlőség operátor felüldefiniálása.
     * 
     * @return true - ha egyező a két könyv
     * @return false - ha nem egyező a két könyv
     */
    bool operator==(const Szepirodalmi&) const;

};

#include <iostream>

#include "string5.h"
#include "memtrace.h"

/**
 * Ősosztály, ami egy könyv adatait tárolja.
 */
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
    Konyv(const String& cim, int ev, int oldalszam) :
        cim(cim), ev(ev), oldalszam(oldalszam) {}

    /**
     * @brief Másoló konstruktor, ami a könyv adatait másolja.
     * 
     * @param k - Könyv, ami másolódik.
     */
    Konyv(const Konyv& k) : cim(k.cim), ev(k.ev), oldalszam(k.oldalszam) {}
    

    /**
     * @brief Getter függvény a könyv címéhez.
     * 
     * @return String - a könyv címe.
     */
    String getCim() const { return cim; }
    /**
     * @brief Getter függvény a könyv kiadásának évehez.
     * 
     * @return int - a könyv kiadásának éve.
     */
    int getEv() const { return ev; }
    /**
     * @brief Getter függvény a könyv oldalainak számához.
     * 
     * @return int - a könyv oldalainak száma.
     */
    int getOldalszam() const { return oldalszam; }


    /**
     * @brief Setter függvény a könyv címéhez.
     * 
     * @param cim - a könyv címe.
     */
    void setCim(const String& cim) { this->cim = cim; }

    /**
     * @brief Setter függvény a könyv kiadásának évehez.
     * 
     * @param ev - a könyv kiadásának éve.
     */
    void setEv(int ev) { this->ev = ev; }

    /**
     * @brief Setter függvény a könyv oldalainak számához.
     * 
     * @param oldalszam - a könyv oldalainak száma.
     */
    void setOldalszam(int oldalszam) { this->oldalszam = oldalszam; }

    /**
     * @brief Kiírja a könyv adatait.
     * 
     * @return standard kimenet a kiírás helye, nincs visszatérési érték.
     */
    virtual void kiir(std::ostream& os) const {
        os << "Konyv: " << cim << " (" << ev << "), " << oldalszam << " oldal" << std::endl;
    }

    virtual ~Konyv() {}
};


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
    Kalandkonyv(const String& cim, int ev, int oldalszam, int korhatar) :
        Konyv(cim, ev, oldalszam), korhatar(korhatar) {}

    /**
     * @brief Másoló konstruktor, ami egy kalandkönyv adatait másolja.
     * 
     * @param k - Kalandkonyv, ami másolódik.
     */
    Kalandkonyv(const Kalandkonyv& k) : Konyv(k), korhatar(k.korhatar) {}

    /**
     * @brief Setter függvény a könyv korhatárához.
     * 
     * @param korhatar - a könyv korhatára.
     */
    void setKorhatar(int korhatar) { this->korhatar = korhatar; }

    /**
     * @brief Getter függvény a könyv korhatárához.
     * 
     * @return int - a könyv korhatára.
     */
    int getKorhatar() const { return korhatar; }
    
    /**
     * @brief Kiírja a könyv adatait.
     * 
     * @return standard kimenet a kiírás helye, nincs visszatérési érték.
     */
    void kiir(std::ostream& os) const {
        os << "Kalandkonyv: " << Konyv::getCim() << " (" << Konyv::getEv << "), " << Konyv::getOldalszam << " oldal, " << korhatar << " ev" << std::endl;
    }
};


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
    Szepirodalmi(const String& cim, int ev, int oldalszam, const String& leiras) :
        Konyv(cim, ev, oldalszam), leiras(leiras) {}


    /**
     * @brief Másoló konstruktor, ami egy szepirodalmi mű adatait másolja.
     * 
     * @param s - Szepirodalmi mű, ami másolódik.
     */
    Szepirodalmi(const Szepirodalmi& s) : Konyv(s), leiras(s.leiras) {}


    /**
     * @brief Setter függvény a könyv leírásához.
     * 
     * @param leiras - a könyv leírására.
     */
    void setLeiras(const String& leiras) { this->leiras = leiras; }

    /**
     * @brief Getter függvény a könyv leírásához.
     * 
     * @return String - a könyv leírására.
     */
    String getLeiras() const { return leiras; }

    /**
     * @brief Kiírja a könyv adatait.
     * 
     * @return standard kimenet a kiírás helye, nincs visszatérési érték.
     */
    void kiir(std::ostream& os) const {
        os << "Szepirodalmi: " << Konyv::getCim() << " (" << Konyv::getEv << "), " << Konyv::getOldalszam << " oldal, " << leiras << std::endl;
    }

};
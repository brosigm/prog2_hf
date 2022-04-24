#include "konyv.h"


Konyv::Konyv(const String& cim, int ev, int oldalszam) :
    cim(cim), ev(ev), oldalszam(oldalszam) {}


Konyv::Konyv(const Konyv& k) : cim(k.cim), ev(k.ev), oldalszam(k.oldalszam) {}

String Konyv::getCim() const { return cim; }

int Konyv::getEv() const { return ev; }

int Konyv::getOldalszam() const { return oldalszam; }

void Konyv::setCim(const String& cim) { this->cim = cim; }

void Konyv::setEv(int ev) { this->ev = ev; }

void Konyv::setOldalszam(int oldalszam) { this->oldalszam = oldalszam; }

void Konyv::kiir(std::ostream& os) const {
    os << "Konyv: " << cim << " (" << ev << "), " << oldalszam << " oldal" << std::endl;
}

Kalandkonyv::Kalandkonyv(const String& cim, int ev, int oldalszam, int korhatar) :
    Konyv(cim, ev, oldalszam), korhatar(korhatar) {}


Kalandkonyv::Kalandkonyv(const Kalandkonyv& k) : Konyv(k), korhatar(k.korhatar) {}

void Kalandkonyv::setKorhatar(int korhatar) { this->korhatar = korhatar; }


int Kalandkonyv::getKorhatar() const { return korhatar; }

void Kalandkonyv::kiir(std::ostream& os) const {
    os << "Kalandkonyv: " << Konyv::getCim() << " (" << Konyv::getEv() << "), " << Konyv::getOldalszam() << " oldal, " << korhatar << " ev" << std::endl;
}

Szepirodalmi::Szepirodalmi(const String& cim, int ev, int oldalszam, const String& leiras) :
    Konyv(cim, ev, oldalszam), leiras(leiras) {}


Szepirodalmi::Szepirodalmi(const Szepirodalmi& s) : Konyv(s), leiras(s.leiras) {}

void Szepirodalmi::setLeiras(const String& leiras) { this->leiras = leiras; }

String Szepirodalmi::getLeiras() const { return leiras; }

void Szepirodalmi::kiir(std::ostream& os) const {
    os << "Szepirodalmi: " << Konyv::getCim() << " (" << Konyv::getEv() << "), " << Konyv::getOldalszam() << " oldal, " << leiras << std::endl;
}
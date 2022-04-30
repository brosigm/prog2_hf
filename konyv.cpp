#include "konyv.h"


Konyv::Konyv(const String& cim, int ev, int oldalszam) :
    cim(cim), ev(ev), oldalszam(oldalszam) {}


Konyv::Konyv(const Konyv& k) : cim(k.cim), ev(k.ev), oldalszam(k.oldalszam) {}

Konyv::Konyv(std::istream& is) {
    is >> cim >> ev >> oldalszam;
}

String Konyv::getCim() const { return cim; }

int Konyv::getEv() const { return ev; }

int Konyv::getOldalszam() const { return oldalszam; }

void Konyv::setCim(const String& cim) { this->cim = cim; }

void Konyv::setEv(int ev) { this->ev = ev; }

void Konyv::setOldalszam(int oldalszam) { this->oldalszam = oldalszam; }

void Konyv::kiir(std::ostream& os) const {
    os << "Konyv " << cim << " " << ev << " " << oldalszam << std::endl;
}

bool Konyv::operator==(const Konyv& rhs) const{
    return cim == rhs.cim && ev == rhs.ev && oldalszam == rhs.oldalszam;
}

Kalandkonyv::Kalandkonyv(const String& cim, int ev, int oldalszam, int korhatar) :
    Konyv(cim, ev, oldalszam), korhatar(korhatar) {}


Kalandkonyv::Kalandkonyv(const Kalandkonyv& k) : Konyv(k), korhatar(k.korhatar) {}

Kalandkonyv::Kalandkonyv(std::istream& is) : Konyv(is) {
    is >> korhatar;
}

void Kalandkonyv::setKorhatar(int korhatar) { this->korhatar = korhatar; }


int Kalandkonyv::getKorhatar() const { return korhatar; }

void Kalandkonyv::kiir(std::ostream& os) const {
    os << "Kalandkonyv " << Konyv::getCim() << " " << Konyv::getEv() << " " << Konyv::getOldalszam() << " " << korhatar << std::endl;
}

bool Kalandkonyv::operator==(const Kalandkonyv& rhs) const{
    return Konyv::operator==(rhs) && korhatar == rhs.korhatar;
}

Szepirodalmi::Szepirodalmi(const String& cim, int ev, int oldalszam, const String& leiras) :
    Konyv(cim, ev, oldalszam), leiras(leiras) {}


Szepirodalmi::Szepirodalmi(const Szepirodalmi& s) : Konyv(s), leiras(s.leiras) {}

Szepirodalmi::Szepirodalmi(std::istream& is) : Konyv(is) {
    is >> leiras;
}

void Szepirodalmi::setLeiras(const String& leiras) { this->leiras = leiras; }

String Szepirodalmi::getLeiras() const { return leiras; }

void Szepirodalmi::kiir(std::ostream& os) const {
    os << "Szepirodalmi " << Konyv::getCim() << " " << Konyv::getEv() << " " << Konyv::getOldalszam() << " " << leiras << std::endl;
}

bool Szepirodalmi::operator==(const Szepirodalmi& rhs) const{
    return Konyv::operator==(rhs) && leiras == rhs.leiras;
}

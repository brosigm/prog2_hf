#ifdef _MSC_VER
// MSC ne adjon figyelmeztető üzenetet a stringkezelő függvényekre.
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>             // Kiíratáshoz
#include <cstring>              // Sztringműveletekhez

#include "memtrace.h"           // a standard headerek után kell lennie
#include "string5.h"





    String::String(char c){
        len = 1;
        pData = new char[len+1];
        pData[0] = c;
        pData[1] = '\0';
    }

    String::String(const char *c){
        len = strlen(c);
        pData = new char[len + 1];
        strcpy(pData, c);
    }





    String::String(const String &s1){
        len = s1.size();
        pData = new char[len+1];
        strcpy(pData, s1.c_str());
    }



String::~String(){
    delete[] pData;
}



String& String::operator=(const String& other){
    len = other.size();
    char *uj = new char[len + 1];
    strcpy(uj, other.c_str());
    delete[] pData;
    pData = uj;
    return *this;
}

char& String::operator[](unsigned int idx) {
    if (idx >= len) throw "String: indexelesi hiba";
    return pData[idx];
}


const char& String::operator[](unsigned int idx) const {
    if (idx >= len) throw "String: indexelesi hiba";
    return pData[idx];
}



String String::operator+(const String& rhs_s) const {
    String temp;		// ide kerül az eredmény
    temp.len = len + rhs_s.len;
    delete []temp.pData;
    temp.pData = new char[temp.len+1];
    strcpy(temp.pData, pData);
    strcat(temp.pData, rhs_s.pData);

    return temp;

}

std::ostream& operator<<(std::ostream& os, const String& s){
    os << s.c_str();
    return os;
}

std::istream& operator>>(std::istream& is, String& s0) {
    unsigned char ch;
    s0 = String("");            
	std::ios_base::fmtflags fl = is.flags(); 
	is.setf(std::ios_base::skipws);			
    while (is >> ch) {
	    is.unsetf(std::ios_base::skipws);	
        if (isspace(ch)) {
            is.putback(ch);           
            break;
        } else {
            s0 = s0 + ch;               
        }
    }
	is.setf(fl);						
    return is;
}

bool operator==(const String& s1, const String& s2) {
    return strcmp(s1.c_str(), s2.c_str()) == 0;
}

bool operator>(const String& s1, const String& s2) {
    return strcmp(s1.c_str(), s2.c_str()) > 0;
}
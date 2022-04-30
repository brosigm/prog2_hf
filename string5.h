#ifndef STRING_H
#define STRING_H
 #include <iostream>


/**
 * A String osztály.
 * A 'pData'-ban vannak a karakterek (a lezáró nullával együtt), 'len' a hossza.
 * A hosszba nem számít bele a lezáró nulla.
 */
class String {
    char *pData;        ///< pointer az adatra
    size_t len;         ///< hossz lezáró nulla nélkül
public:
    /**
     * @brief Konstruktor, ami létrehozza egy üres stringet.
     * 
     */
    String(): len(0){
        pData = new char[1];
        pData[0] = '\0';
    }

    /**
     * @brief Megadja a string hosszát.
     * 
     * @return size_t - a string hossza.
     */
    size_t size() const { return len; }

    /**
     * @brief Visszaad egy \0 val lezárt karaktersorozatot.
     * 
     * @return const char* 
     */
    const char* c_str() const { return pData;}

    /**
     * @brief Konstruktor, ami egy karakterből hoz létre egy String objektumot
     * 
     * @param c 
     */
    String(char c);

    /**
     * @brief Konstruktor, ami egy String objektumot hoz létre karaktersorozatra mutató pointer segítségével.
     * 
     * @param c - a karaktersorozat.
     */
    String(const char *c);

    /**
     * @brief String osztály desktruktora
     * 
     */
    ~String();

    /**
     * @brief Másoló konstruktor a String osztályhoz.
     * 
     * @param tmp 
     */
    String(const String &tmp);

    /**
     * @brief értékadás operátor a String osztályhoz.
     * 
     * @param other - a másolandó String objektum.
     * @return String& 
     */
    String& operator=(const String& other);

    /**
     * @brief Összeadás operátor a String osztályhoz.
     * 
     * @param rhs_s - a hozzáadandó String objektum.
     * @return String 
     */
    String operator+(const String& rhs_s) const ;

    /**
     * @brief Karakter hozzáfűzés egy string objektumhoz.
     * 
     * @param rhs_c - a hozzáfűzendő karakter.
     * @return String 
     */
    String operator+(char rhs_c) const { return *this + String(rhs_c);}

    /**
     * @brief Indexelő operátor a String osztályhoz.
     * 
     * @param idx 
     * @return char& 
     */
    char& operator[](unsigned int idx);

    /**
     * @brief Indexelő operátor a String osztályhoz.
     * 
     * @param idx 
     * @return char 
     */
    const char& operator[](unsigned int idx) const;


};

/**
 * @brief Inserter operátor a String osztályhoz.
 * 
 * @param os - a kiírás helye
 * @param s0 - a kiírandó String objektum
 * @return std::ostream& 
 */
std::ostream& operator<<(std::ostream& os, const String& s0);

/**
 * @brief Extractor operátor a String osztályhoz.
 * 
 * @param is - a beolvasás helye
 * @param s0 - a beolvasandó String objektum
 * @return std::istream& 
 */
std::istream& operator>>(std::istream& is, String& s0);

/**
 * @brief Karakter és string összeadását megvalósító függvény.
 * 
 * @param ch - a karakter
 * @param str - a string
 * @return String 
 */
inline String operator+(char ch, const String& str) { return String(ch) + str; }

/**
 * @brief Összehasonlító operátor a String osztályhoz.
 * 
 * @param s1 
 * @param s2 
 * @return true 
 * @return false 
 */
bool operator==(const String& s1, const String& s2);

/**
 * @brief Nagyobb-e operátor a String osztályhoz.
 * 
 * @param s1 
 * @param s2 
 * @return true 
 * @return false 
 */
bool operator>(const String& s1, const String& s2);







#endif

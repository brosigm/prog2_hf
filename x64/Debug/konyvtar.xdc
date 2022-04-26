<?xml version="1.0"?><doc>
<members>
<member name="T:String" decl="false" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="3">
 \file string5.h

 Ez a fÃ¡jl tartalmazza a String osztÃ¡ly deklarÃ¡ciÃ³jÃ¡t Ã©s inline fÃ¼ggvÃ©nyeit.

String osztÃ¡ly.
A pData-ban vannak a karakterek (a lezÃ¡rÃ³ nullÃ¡val egyÃ¼tt),
len a hossz.A hosszba nem szÃ¡mÃ­t bele a lezÃ¡rÃ³ nulla.

</member>
<member name="M:String.size" decl="false" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="22">
Hossz lekÃ©rdezÃ©se.
@return Sztring hossza
</member>
<member name="M:String.c_str" decl="false" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="27">
Default konstruktor
String() :pData(0), len(0) {}
helyett ""-val inicializÃ¡ljuk a const char*-osban
C-sztringet ad vissza
@return pinter egy '\0'-val lezÃ¡rt (C) sztringre
</member>
<member name="M:String.#ctor(System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="35">
Konstruktor egy char karakterbÅ‘l
@param ch - karakter
</member>
<member name="M:String.#ctor(System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte!System.Runtime.CompilerServices.IsConst*)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="39">
Konstruktor egy nullÃ¡val lezÃ¡rt char sorozatbÃ³l
Ez a deafault is!
@param p - pointer egy C sztringre
</member>
<member name="M:String.#ctor(String!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="44">
MÃ¡solÃ³ konstruktor
@param s1 - String, amibÅ‘l lÃ©trehozzuk az Ãºj String-et
</member>
<member name="M:String.Dispose" decl="false" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="48">
Destruktor
</member>
<member name="M:String.printDbg(System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte!System.Runtime.CompilerServices.IsConst*)" decl="false" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="51">
KiÃ­runk egy Stringet (debug cÃ©lokra)
ElÅ‘tte kiÃ­runk egy tetszÅ‘leges szÃ¶veget.
@param txt - nullÃ¡val lezÃ¡rt szÃ¶vegre mutatÃ³ pointer
</member>
<member name="M:String.op_Assign(String!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="59">
Ã‰rtÃ©kadÃ³ operÃ¡tor.
@param rhs_s - jobboldali String
@return baoldali (mÃ³dosÃ­tott) string (referenciÃ¡ja)
</member>
<member name="M:String.op_Addition(String!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="64">
KÃ©t Stringet Ã¶sszefÅ±z
@param rhs_s - jobboldali String
@return Ãºj String, ami tartalmazza a kÃ©t stringet egmÃ¡s utÃ¡n
</member>
<member name="M:String.op_Addition(System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte)" decl="false" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="69">
Sztrinhez karaktert Ã¶sszefÅ±z
@param rhs_c - jobboldali karakter
@return Ãºj String, ami tartalmazza a sztringet Ã©s a karaktert egymÃ¡s utÃ¡n
</member>
<member name="M:String.op_Subscript(System.UInt32)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="74">
A string egy megadott indexÅ± elemÃ©nek REFERENCIÃJÃVAL tÃ©r vissza.
@param idx - charakter indexe
@return karakter (referencia)
        IndexelÃ©si hiba esetÃ©n const char* kivÃ©telt dob.
</member>
<member name="M:String.op_Subscript(System.UInt32)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="80">
A string egy megadott indexÅ± elemÃ©nek REFERENCIÃJÃVAL tÃ©r vissza.
@param idx - karakter indexe
@return karakter (referencia)
        IndexelÃ©si hiba esetÃ©n const char* kivÃ©telt dob (assert helyett).
</member>
<member name="M:op_LeftShift(std.basic_ostream&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte}&gt;*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,String!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="87">
GlobÃ¡lis fÃ¼ggvÃ©nyek:
kiÃ­r az ostream-re
@param os - ostream tÃ­pusÃº objektum
@param s0 - String, amit kiÃ­runk
@return os
</member>
<member name="M:op_RightShift(std.basic_istream&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte}&gt;*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,String*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="94">
Beolvas az istream-rÅ‘l egy szÃ³t egy string-be.
@param is - istream tÃ­pusÃº objektum
@param s0 - String, amibe beolvas
@return is
</member>
<member name="M:op_Addition(System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,String!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="false" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.h" line="100">
Karakterhez sztringet fÅ±z
@param ch - karakter
@param str - String
@return Ãºj String, ami tartalmazza a karaktert Ã©s a sztringet egymÃ¡s utÃ¡n
</member>
<member name="M:Konyv.#ctor(String!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,System.Int32,System.Int32)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="13">
Konstruktor.
@param cim A kÃ¶nyv cÃ­me.
@param ev A kÃ¶nyv kiadÃ¡sÃ¡nak Ã©ve.
@param oldalszam A kÃ¶nyv oldalainak szÃ¡ma.

</member>
<member name="M:Konyv.#ctor(Konyv!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="21">
@brief MÃ¡solÃ³ konstruktor, ami a kÃ¶nyv adatait mÃ¡solja.

@param k - KÃ¶nyv, ami mÃ¡solÃ³dik.

</member>
<member name="M:Konyv.getCim" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="29">
@brief Getter fÃ¼ggvÃ©ny a kÃ¶nyv cÃ­mÃ©hez.

@return String - a kÃ¶nyv cÃ­me.

</member>
<member name="M:Konyv.getEv" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="35">
@brief Getter fÃ¼ggvÃ©ny a kÃ¶nyv kiadÃ¡sÃ¡nak Ã©vehez.

@return int - a kÃ¶nyv kiadÃ¡sÃ¡nak Ã©ve.

</member>
<member name="M:Konyv.getOldalszam" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="41">
@brief Getter fÃ¼ggvÃ©ny a kÃ¶nyv oldalainak szÃ¡mÃ¡hoz.

@return int - a kÃ¶nyv oldalainak szÃ¡ma.

</member>
<member name="M:Konyv.setCim(String!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="49">
@brief Setter fÃ¼ggvÃ©ny a kÃ¶nyv cÃ­mÃ©hez.

@param cim - a kÃ¶nyv cÃ­me.

</member>
<member name="M:Konyv.setEv(System.Int32)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="56">
@brief Setter fÃ¼ggvÃ©ny a kÃ¶nyv kiadÃ¡sÃ¡nak Ã©vehez.

@param ev - a kÃ¶nyv kiadÃ¡sÃ¡nak Ã©ve.

</member>
<member name="M:Konyv.setOldalszam(System.Int32)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="63">
@brief Setter fÃ¼ggvÃ©ny a kÃ¶nyv oldalainak szÃ¡mÃ¡hoz.

@param oldalszam - a kÃ¶nyv oldalainak szÃ¡ma.

</member>
<member name="M:Konyv.kiir(std.basic_ostream&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte}&gt;*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="70">
@brief KiÃ­rja a kÃ¶nyv adatait.

@return standard kimenet a kiÃ­rÃ¡s helye, nincs visszatÃ©rÃ©si Ã©rtÃ©k.

</member>
<member name="M:Kalandkonyv.#ctor(String!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,System.Int32,System.Int32,System.Int32)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="85">
Konstruktor.
@param cim A kÃ¶nyv cÃ­me.
@param ev A kÃ¶nyv kiadÃ¡sÃ¡nak Ã©ve.
@param oldalszam A kÃ¶nyv oldalainak szÃ¡ma.
@param korhatar A kÃ¶nyv korhatÃ¡rÃ¡t tÃ¡rolja.

</member>
<member name="M:Kalandkonyv.#ctor(Kalandkonyv!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="94">
@brief MÃ¡solÃ³ konstruktor, ami egy kalandkÃ¶nyv adatait mÃ¡solja.

@param k - Kalandkonyv, ami mÃ¡solÃ³dik.

</member>
<member name="M:Kalandkonyv.setKorhatar(System.Int32)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="101">
@brief Setter fÃ¼ggvÃ©ny a kÃ¶nyv korhatÃ¡rÃ¡hoz.

@param korhatar - a kÃ¶nyv korhatÃ¡ra.

</member>
<member name="M:Kalandkonyv.getKorhatar" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="108">
@brief Getter fÃ¼ggvÃ©ny a kÃ¶nyv korhatÃ¡rÃ¡hoz.

@return int - a kÃ¶nyv korhatÃ¡ra.

</member>
<member name="M:Kalandkonyv.kiir(std.basic_ostream&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte}&gt;*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="115">
@brief KiÃ­rja a kÃ¶nyv adatait.

@return standard kimenet a kiÃ­rÃ¡s helye, nincs visszatÃ©rÃ©si Ã©rtÃ©k.

</member>
<member name="M:Szepirodalmi.#ctor(String!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,System.Int32,System.Int32,String!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="128">
Konstruktor.
@param cim A kÃ¶nyv cÃ­me.
@param ev A kÃ¶nyv kiadÃ¡sÃ¡nak Ã©ve.
@param oldalszam A kÃ¶nyv oldalainak szÃ¡ma.
@param leiras A kÃ¶nyv leÃ­rÃ¡sÃ¡t tÃ¡rolja.

</member>
<member name="M:Szepirodalmi.#ctor(Szepirodalmi!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="138">
@brief MÃ¡solÃ³ konstruktor, ami egy szepirodalmi mÅ± adatait mÃ¡solja.

@param s - Szepirodalmi mÅ±, ami mÃ¡solÃ³dik.

</member>
<member name="M:Szepirodalmi.setLeiras(String!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="146">
@brief Setter fÃ¼ggvÃ©ny a kÃ¶nyv leÃ­rÃ¡sÃ¡hoz.

@param leiras - a kÃ¶nyv leÃ­rÃ¡sÃ¡ra.

</member>
<member name="M:Szepirodalmi.getLeiras" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="153">
@brief Getter fÃ¼ggvÃ©ny a kÃ¶nyv leÃ­rÃ¡sÃ¡hoz.

@return String - a kÃ¶nyv leÃ­rÃ¡sÃ¡ra.

</member>
<member name="M:Szepirodalmi.kiir(std.basic_ostream&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte}&gt;*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyv.h" line="160">
@brief KiÃ­rja a kÃ¶nyv adatait.

@return standard kimenet a kiÃ­rÃ¡s helye, nincs visszatÃ©rÃ©si Ã©rtÃ©k.

</member>
<member name="M:Konyvtar.#ctor(System.Int32)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyvtar.h" line="19">
Konstruktor.
@param kapacitas A kÃ¶nyvtar kapacitÃ¡sa.

</member>
<member name="M:Konyvtar.#ctor(System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte*,System.Int32)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyvtar.h" line="27">
@brief Beolvas egy lemetett kÃ¶nyvtÃ¡rat egy szÃ¶veges filebÃ³l.

@param filename - a file neve.

</member>
<member name="M:Konyvtar.#ctor(Konyvtar!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyvtar.h" line="34">
@brief MÃ¡solÃ³ konstruktor, ami a kÃ¶nyvtar adatait mÃ¡solja.

@param kt - KÃ¶nyvtar, ami mÃ¡solÃ³dik.

</member>
<member name="M:Konyvtar.add(Konyv*)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyvtar.h" line="41">
@brief HozzÃ¡ad egy kÃ¶nyvet a kÃ¶nyvtarhoz.

@param k - hozzÃ¡adandÃ³ kÃ¶nyv.

</member>
<member name="M:Konyvtar.remove(System.Int32)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyvtar.h" line="48">
@brief EltÃ¡volÃ­t egy kÃ¶nyvet a kÃ¶nyvtarbÃ³l, index alapjÃ¡n.

@param index - az eltÃ¡volÃ­tandÃ³ kÃ¶nyv indexe.

</member>
<member name="M:Konyvtar.remove(String!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyvtar.h" line="56">
@brief EltÃ¡volÃ­t egy kÃ¶nyvet a kÃ¶nyvtarbÃ³l, cÃ­m alapjÃ¡n.

@param cim - az eltÃ¡volÃ­tandÃ³ kÃ¶nyv cÃ­me.

</member>
<!-- Discarding badly formed XML document comment for member 'M:Konyvtar.print(std.basic_ostream<System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte}>*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)'. -->
<member name="M:Konyvtar.Dispose" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyvtar.h" line="69">
@brief Destruktor.

</member>
<member name="M:Konyvtar.op_Subscript(System.Int32!System.Runtime.CompilerServices.IsConst)" decl="true" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\konyvtar.h" line="74">
@brief Index alapjÃ¡n visszaad egy kÃ¶nyvet.

@param index 
@return Konyv* - a kÃ¶nyvre mutatÃ³ pointer.

</member>
</members>
</doc>
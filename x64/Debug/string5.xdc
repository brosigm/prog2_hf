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
<member name="M:String.#ctor(System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte)" decl="false" source="C:\Users\marci\Documents\egyetem\infocpp\nagyhz\nagyhf\nagyhf\string5.cpp" line="21">
Konstruktor: egy char karakterbÅ‘l (createStrFromChar)
</member>
</members>
</doc>
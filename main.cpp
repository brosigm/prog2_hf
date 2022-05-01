#include <iostream>
#include "memtrace.h"
#include "konyvtar.h"
#include "gtest_lite.h"

//A tesztfájl teknikai okokból használ std::string-et, mivel a stringstreamből visszaolvasás esetén csak igy lehet tesztelni a megoldás helyességét.

int main()
{
	TEST(String, index_op)
		String a("asd");
		EXPECT_EQ(a[0], 'a');
		EXPECT_EQ(a[1], 's');
		EXPECT_EQ(a[2], 'd');
		const String b("asd");
		EXPECT_EQ(b[0], 'a');
		EXPECT_EQ(b[1], 's');
		EXPECT_EQ(b[2], 'd');
	END
		
	TEST(String, index_opthrow)
		String a("asdf");
		try {
			a[5];
			}
		catch (const char* p) {
		}
		const String b("asdf");
		try {
			b[5];
		}
		catch (const char* p) {
		}
	END

	TEST(String, nagyobb-e)
		String a("abcd");
		String b("bcde");
		EXPECT_FALSE(a > b);
	END	
	
	TEST(Konyv, SetterGetter)
		Konyv konyv1("pelda_szoveg", 4, 5);
		konyv1.setCim("A");
		konyv1.setEv(1997);
		konyv1.setOldalszam(101);
		EXPECT_EQ(konyv1.getCim(), String("A"));
		EXPECT_EQ(konyv1.getEv(), 1997);
		EXPECT_EQ(konyv1.getOldalszam(), 101);
	END

	TEST(Konyv, konstruktor)
		Konyv konyv2("BROSIG_MARTON_JANOS", 2022, 69);
		EXPECT_EQ(konyv2.getCim(), String("BROSIG_MARTON_JANOS"));
		EXPECT_EQ(konyv2.getEv(), 2022);
		EXPECT_EQ(konyv2.getOldalszam(), 69);
	END
	
	TEST(Konyv, masoloKonstruktor)
		Konyv konyv3("BROSIG_MARTON_JANOS", 2022, 69);
		Konyv konyv4 = konyv3;
		EXPECT_EQ(konyv4 == konyv3, true);
	END

	TEST(Konyv, kiiratas)
		Konyv konyv5("BROSIG_MARTON_JANOS", 2022, 69);
		std::stringstream ss;
		konyv5.kiir(ss);
		EXPECT_EQ(ss.str(), std::string("Konyv BROSIG_MARTON_JANOS 2022 69\n"));
	END

	TEST(Kalandkonyv, SetterGetter)
		Kalandkonyv konyv5("BROSIG_MARTON_JANOS", 2022, 69, 5);
		konyv5.setCim("A");
		konyv5.setEv(1997);
		konyv5.setOldalszam(101);
		konyv5.setKorhatar(5);
		EXPECT_EQ(konyv5.getCim(), String("A"));
		EXPECT_EQ(konyv5.getEv(), 1997);
		EXPECT_EQ(konyv5.getOldalszam(), 101);
		EXPECT_EQ(konyv5.getKorhatar(), 5);
	END

	TEST(Kalandkonyv, konstruktor)
		Kalandkonyv konyv6("BROSIG_MARTON_JANOS", 2022, 69, 5);
		EXPECT_EQ(konyv6.getCim(), String("BROSIG_MARTON_JANOS"));
		EXPECT_EQ(konyv6.getEv(), 2022);
		EXPECT_EQ(konyv6.getOldalszam(), 69);
		EXPECT_EQ(konyv6.getKorhatar(), 5);
	END

	TEST(Kalandkonyv, masoloKonstruktor)
		Kalandkonyv konyv7("BROSIG_MARTON_JANOS", 2022, 69, 5);
		Kalandkonyv konyv8 = konyv7;
		EXPECT_EQ(konyv8 == konyv7, true);
	END

	TEST(Kalandkonyv, kiiratas)
		Kalandkonyv konyv9("BROSIG_MARTON_JANOS", 2022, 69, 5);
		std::stringstream ss;
		konyv9.kiir(ss);
		EXPECT_EQ(ss.str(), std::string("Kalandkonyv BROSIG_MARTON_JANOS 2022 69 5\n"));
	END

	TEST(Szepirodalmi, SetterGetter)
		Szepirodalmi konyv9("BROSIG_MARTON_JANOS", 2022, 69, "pelda_szoveg__a");
		konyv9.setCim("A");
		konyv9.setEv(1997);
		konyv9.setOldalszam(101);
		konyv9.setLeiras("pelda_szoveg__a");
		EXPECT_EQ(konyv9.getCim(), String("A"));
		EXPECT_EQ(konyv9.getEv(), 1997);
		EXPECT_EQ(konyv9.getOldalszam(), 101);
		EXPECT_EQ(konyv9.getLeiras(), String("pelda_szoveg__a"));
	END

	TEST(Szepirodalmi, konstruktor)
		Szepirodalmi konyv10("BROSIG_MARTON_JANOS", 2022, 69, "pelda_szoveg__a");
		EXPECT_EQ(konyv10.getCim(), String("BROSIG_MARTON_JANOS"));
		EXPECT_EQ(konyv10.getEv(), 2022);
		EXPECT_EQ(konyv10.getOldalszam(), 69);
		EXPECT_EQ(konyv10.getLeiras(), String("pelda_szoveg__a"));
	END

	TEST(Szepirodalmi, masoloKonstruktor)
		Szepirodalmi konyv11("BROSIG_MARTON_JANOS", 2022, 69, "pelda_szoveg__a");
		Szepirodalmi konyv12 = konyv11;
		EXPECT_EQ(konyv12 == konyv11, true);
	END

	TEST(Szepirodalmi, kiiratas)
		Szepirodalmi konyv13("BROSIG_MARTON_JANOS", 2022, 69, "pelda_szoveg__a");
		std::stringstream ss;
		konyv13.kiir(ss);
		EXPECT_EQ(ss.str(), std::string("Szepirodalmi BROSIG_MARTON_JANOS 2022 69 pelda_szoveg__a\n"));
	END


	TEST(Konyvtar, konstruktor)
		Konyvtar konyvtar1(10);
		EXPECT_EQ(konyvtar1.getSize(), 10);
	END

	TEST(Konyvtar, egyenlo_operator)
		Konyvtar konyvtar2(10);
		Konyvtar konyvtar3(10);
		EXPECT_EQ(konyvtar2 == konyvtar3, true);
		
		Konyvtar konyvtar4(11);
		Konyv* konyv3 = new Konyv("BROSIG_MARTON_JANOS", 2022, 69);
		konyvtar4.add(konyv3);
		EXPECT_EQ(konyvtar2 == konyvtar4, false);

		Konyv* konyv1 = new Konyv("BROSIG_MARTON_JANOS", 2022, 69);
		Konyv* konyv2 = new Konyv("BROSIG_MARTON_", 202, 9);
		konyvtar2.add(konyv1);
		konyvtar3.add(konyv2);
		EXPECT_EQ(konyvtar2 == konyvtar3, false);
	END

	TEST(Konyvtar, index_operator)
		Konyvtar konyvtar4(10);
		konyvtar4.add(new Konyv("BROSIG_MARTON_JANOS", 1997, 101));
		EXPECT_EQ(konyvtar4[0]->getCim(), String("BROSIG_MARTON_JANOS"));
		try {
			konyvtar4[600];
		}
		catch (const char* t)
		{
		}
	END
		
	TEST(Konyvtar, megtel)
		Konyvtar konyvtar2(2);
	try {
		Konyv* konyv1 = new Konyv("BROSIG_MARTON_JANOS", 1997, 101);
		Kalandkonyv* konyv2 = new Kalandkonyv("BROSIG_MARTON_JANOS", 2022, 69, 5);
		Szepirodalmi* konyv3 = new Szepirodalmi("BROSIG_MARTON_JANOS", 2022, 69, "pelda_szoveg__a");
		konyvtar2.add(konyv1);
		konyvtar2.add(konyv2);
		konyvtar2.add(konyv3);
	}
	catch (const char* p) {
	}
	END

	TEST(Konyvtar, add&Kiiras)
		Konyvtar konyvtar(2);
		Konyv *konyv1 = new Konyv("BROSIG_MARTON_JANOS", 1997, 101);
		Kalandkonyv *konyv2 = new Kalandkonyv("BROSIG_MARTON_JANOS", 2022, 69, 5);
		konyvtar.add(konyv1);
		konyvtar.add(konyv2);
		std::stringstream ss;
		konyvtar.print(ss);
		EXPECT_EQ(ss.str(), std::string("Konyv BROSIG_MARTON_JANOS 1997 101\nKalandkonyv BROSIG_MARTON_JANOS 2022 69 5\n"));
	END

	TEST(Konyvtar, remove)
		Konyvtar konyvtar(2);
		Konyv *konyv1 = new Konyv("BROSIG_MARTON_JANOS", 1997, 101);
		Kalandkonyv *konyv2 = new Kalandkonyv("BROSIG_MARTON_JANOS", 2022, 69, 5);
		konyvtar.add(konyv1);
		konyvtar.add(konyv2);
		konyvtar.remove(0);
		std::stringstream ss;
		konyvtar.print(ss);
		EXPECT_EQ(ss.str(), std::string("Kalandkonyv BROSIG_MARTON_JANOS 2022 69 5\n"));
	END
	
	TEST(Konyvtar, remove2)
		Konyvtar konyvtar(2);
		Konyv *konyv1 = new Konyv("BROSIG_MARTON_JANOS", 1997, 101);
		Kalandkonyv *konyv2 = new Kalandkonyv("TOTH_BARNABAS", 2022, 69, 5);
		konyvtar.add(konyv1);
		konyvtar.add(konyv2);
		konyvtar.remove("TOTH_BARNABAS");
		std::stringstream ss;
		konyvtar.print(ss);
		EXPECT_EQ(ss.str(), std::string("Konyv BROSIG_MARTON_JANOS 1997 101\n"));
	END

	TEST(Konyvtar, removeThrow)
		Konyvtar konyvtar(2);
		Konyv *konyv1 = new Konyv("BROSIG_MARTON_JANOS", 1997, 101);
		Kalandkonyv *konyv2 = new Kalandkonyv("TOTH_BARNABAS", 2022, 69, 5);
		konyvtar.add(konyv1);
		konyvtar.add(konyv2);
		try {
			konyvtar.remove(3);
		}
		catch (const char* p) {
		}
		try {
			konyvtar.remove("TOTBARNABAS");
		}
		catch (const char* p) {
		}
	END

	TEST(Konyvtar, kiirasMind)
		Konyvtar konyvtar(3);
		Konyv *konyv1 = new Konyv("BROSIG_MARTON_JANOS", 1997, 101);
		Kalandkonyv *konyv2 = new Kalandkonyv("BROSIG_MARTON_JANOS", 2022, 69, 5);
		Szepirodalmi *konyv3 = new Szepirodalmi("BROSIG_MARTON_JANOS", 2022, 69, "pelda_szoveg__a");
		konyvtar.add(konyv1);
		konyvtar.add(konyv2);
		konyvtar.add(konyv3);
		std::stringstream ss;
		konyvtar.print(ss);
		EXPECT_EQ(ss.str(), std::string("Konyv BROSIG_MARTON_JANOS 1997 101\nKalandkonyv BROSIG_MARTON_JANOS 2022 69 5\nSzepirodalmi BROSIG_MARTON_JANOS 2022 69 pelda_szoveg__a\n"));
	END

	TEST(Konyvtar, kiirasfileba)
		Konyvtar konyvtar(3);
		Konyv *konyv1 = new Konyv("BROSIG_MARTON_JANOS", 1997, 101);
		Kalandkonyv *konyv2 = new Kalandkonyv("BROSIG_MARTON_JANOS", 2022, 69, 5);
		Szepirodalmi *konyv3 = new Szepirodalmi("BROSIG_MARTON_JANOS", 2022, 69, "pelda_szoveg__a");
		konyvtar.add(konyv1);
		konyvtar.add(konyv2);
		konyvtar.add(konyv3);
		EXPECT_EQ(konyvtar.printFile("konyvtar.txt"), true);
		ASSERT_NO_THROW(konyvtar.printFile("konyvtar.txt"));
	END


	TEST(Konyvtar, beolvasasFileabol)
		ASSERT_NO_THROW(Konyvtar konyvtar("konyvtar.txt", 3));
		Konyvtar konyvtar("konyvtar.txt", 3);
		std::stringstream ss;
		konyvtar.print(ss);
		EXPECT_EQ(ss.str(), std::string("Konyv BROSIG_MARTON_JANOS 1997 101\nKalandkonyv BROSIG_MARTON_JANOS 2022 69 5\nSzepirodalmi BROSIG_MARTON_JANOS 2022 69 pelda_szoveg__a\n"));
	END

	TEST(Konyvtar, sortABC)
		Konyvtar konyvtar(3);
		Konyv *konyv1 = new Konyv("BROSIG_MARTON_JANOS", 1997, 101);
		Kalandkonyv *konyv2 = new Kalandkonyv("AROSIG_MARTON_JANOS", 2022, 69, 5);
		Szepirodalmi *konyv3 = new Szepirodalmi("CROSIG_MARTON_JANOS", 2022, 69, "pelda_szoveg__a");
		konyvtar.add(konyv1);
		konyvtar.add(konyv2);
		konyvtar.add(konyv3);
		konyvtar.sortGEN(compareABC);
		std::stringstream ss;
		konyvtar.print(ss);
		EXPECT_EQ(ss.str(), std::string("Kalandkonyv AROSIG_MARTON_JANOS 2022 69 5\nKonyv BROSIG_MARTON_JANOS 1997 101\nSzepirodalmi CROSIG_MARTON_JANOS 2022 69 pelda_szoveg__a\n"));
	END

	TEST(Konyvtar, sortPages)
		Konyvtar konyvtar(4);
		Konyv *konyv1 = new Konyv("BROSIG_MARTON_JANOS", 1997, 101);
		Kalandkonyv *konyv2 = new Kalandkonyv("BROSIG_MARTON_JANOS", 2022, 69, 5);
		Szepirodalmi *konyv3 = new Szepirodalmi("CROSIG_MARTON_JANOS", 2022, 150, "pelda_szoveg__a");
		konyvtar.add(konyv1);
		konyvtar.add(konyv2);
		konyvtar.add(konyv3);
		konyvtar.sortGEN(comparePages);
		std::stringstream ss;
		konyvtar.print(ss);
		EXPECT_EQ(ss.str(), std::string("Kalandkonyv BROSIG_MARTON_JANOS 2022 69 5\nKonyv BROSIG_MARTON_JANOS 1997 101\nSzepirodalmi CROSIG_MARTON_JANOS 2022 150 pelda_szoveg__a\n"));
	END

	TEST(Konyvtar, sortYear)
		Konyvtar konyvtar(4);
		Konyv *konyv1 = new Konyv("BROSIG_MARTON_JANOS", 1997, 101);
		Kalandkonyv *konyv2 = new Kalandkonyv("BROSIG_MARTON_JANOS", 2022, 69, 5);
		Szepirodalmi *konyv3 = new Szepirodalmi("CROSIG_MARTON_JANOS", 2011, 150, "pelda_szoveg__a");
		konyvtar.add(konyv1);
		konyvtar.add(konyv2);
		konyvtar.add(konyv3);
		konyvtar.sortGEN(compareYear);
		std::stringstream ss;
		konyvtar.print(ss);
		EXPECT_EQ(ss.str(), std::string("Konyv BROSIG_MARTON_JANOS 1997 101\nSzepirodalmi CROSIG_MARTON_JANOS 2011 150 pelda_szoveg__a\nKalandkonyv BROSIG_MARTON_JANOS 2022 69 5\n"));
		END
}
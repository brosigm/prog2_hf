#include <iostream>
#include "memtrace.h"
#include "konyv.h"
#include "gtest_lite.h"

int main()
{
	TEST(Konyv, SetterGetter)
		Konyv konyv1("asdfsadf", 4, 5);
		konyv1.setCim("A");
		konyv1.setEv(1997);
		konyv1.setOldalszam(101);
		EXPECT_EQ(konyv1.getCim(), "A");
		EXPECT_EQ(konyv1.getEv(), 1997);
		EXPECT_EQ(konyv1.getOldalszam(), 101);
	END

	TEST(Konyv, konstruktor)
		Konyv konyv2("BROSIG MARTON JANOS", 2022, 69);
		EXPECT_EQ(konyv2.getCim(), "BROSIG MARTON JANOS");
		EXPECT_EQ(konyv2.getEv(), 2022);
		EXPECT_EQ(konyv2.getOldalszam(), 69);
	END
	
	TEST(Konyv, masoloKonstruktor)
		Konyv konyv3("BROSIG MARTON JANOS", 2022, 69);
		Konyv konyv4 = konyv3;
		EXPECT_EQ(konyv4, konyv3);
	END
}
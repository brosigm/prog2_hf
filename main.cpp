#include <iostream>
#include "memtrace.h"
#include "konyv.h"
#include "gtest_lite.h"

int main()
{
	TEST(Konyv, SetterGetter)
		Konyv konyv("asdfsadf", 4, 5);
		konyv.setCim("A");
		konyv.setEv(1997);
		konyv.setOldalszam(101);
		EXPECT_EQ(konyv.getCim(), "A");
		EXPECT_EQ(konyv.getEv(), 1997);
		EXPECT_EQ(konyv.getOldalszam(), 101);
	END

	TEST(Konyv, konstruktor)
		Konyv konyv("BROSIG MARTON JANOS", 2022, 69);
		EXPECT_EQ(konyv.getCim(), "BROSIG MARTON JANOS");
		EXPECT_EQ(konyv.getEv(), 2022);
		EXPECT_EQ(konyv.getOldalszam(), 69);
	END
	
}
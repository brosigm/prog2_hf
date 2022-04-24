#include <iostream>
#include "memtrace.h"
#include "konyv.h"


int main()
{
	Konyv *h = new Konyv("asdfasdf", 300, 1995);
	delete h;
	
}
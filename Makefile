#
#
# Makefile a CppBolt eloallitasahoz
# 	kihazsnalja, hogy gmake
#

PROG = konyvtar
SRCS = konyvtar.cpp konyv.cpp string5.cpp main.cpp memtrace.cpp
HDRS = konyvtar.h string5.h konyv.h memtrace.h gtest_lite.h
OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -ggdb -pedantic -Wall -DMEMTRACE
#-Werror 

$(PROG): $(OBJS) 
	$(CXX) -o $(PROG) $(OBJS)

.PHONY:
clean:
	rm -f $(OBJS) $(PROG)

# Egyszerusites: Minden .o fugg minden header-tol, es meg a Makefile-tol is 
$(OBJS): $(HDRS) Makefile



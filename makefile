CXXFLAGS  = -std=c++11 -c -g
COMPILER = clang++
all: all

Problem1: Problem1.o
	$(COMPILER) Problem1.o -o Problem1

Problem1.o: Problem1.cpp
	$(COMPILER) $(CXXFLAGS) Problem1.cpp

Problem2: Problem2.o
	$(COMPILER) Problem2.o -o Problem2

Problem2.o: Problem2.cpp
	$(COMPILER) $(CXXFLAGS) Problem2.cpp

Problem3: Problem3.o
	$(COMPILER) Problem3.o -o Problem3

Problem3.o: Problem3.cpp
	$(COMPILER) $(CXXFLAGS) Problem3.cpp
	
Problem4: Problem4.o
	$(COMPILER) Problem4.o -o Problem4

Problem4.o: Problem4.cpp
	$(COMPILER) $(CXXFLAGS) Problem4.cpp
	
Problem5: Problem5.o
	$(COMPILER) Problem5.o -o Problem5

Problem5.o: Problem5.cpp
	$(COMPILER) $(CXXFLAGS) Problem5.cpp




clean:
	rm *.o Problem1 Problem2

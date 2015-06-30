CXXFLAGS  = -c -g
COMPILER = clang++
all: all

Problem1: Problem1.o
	$(COMPILER) Problem1.o -o Problem1

Problem1.o: Problem1.cpp
	$(COMPILER) $(CXXFLAGS) Problem1.cpp

clean:
	rm *.o Problem1

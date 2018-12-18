all: test1 gmptest1

test1: dectobin.o example.o
	g++ -o test1 example.o dectobin.o

gmptest1: gmpdectobin.o gmpexample.o
	g++ -o gmptest1 gmpexample.o gmpdectobin.o -lgmp
	
dectobin.o:
	g++ -c dectobin.cpp

example.o:
	g++ -c example.cpp

gmpdectobin.o:
	g++ -c gmpdectobin.cpp

gmpexample.o:
	g++ -c gmpexample.cpp

clean:
	rm -f test1 dectobin.o example.o gmptest1 gmpdectobin.o gmpexample.o


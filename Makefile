test1: dectobin.o example.o
	g++ -o test1 example.o dectobin.o

dectobin.o:
	g++ -c dectobin.cpp

example.o:
	g++ -c example.cpp

clean:
	rm -f test1 dectobin.o example.o


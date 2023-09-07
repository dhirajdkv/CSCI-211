# Makefile
# Dommaraju, Dhiraj
# ddommaraju

foobar: foobar.o foo.o bar.o
	g++ -Wall -pedantic -std=c++11 -o foobar foobar.o foo.o bar.o

foobar.o: foobar.cpp
	g++ -Wall -pedantic -std=c++11 -c foobar.cpp

foo.o: foo.cpp foo.h
	g++ -Wall -pedantic -std=c++11 -c foo.cpp

bar.o: bar.cpp bar.h
	g++ -Wall -pedantic -std=c++11 -c bar.cpp

clean:
	rm -f foobar foobar.o foo.o bar.o

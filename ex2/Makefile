# This is the Makefile from exercise 1, which built program schedule from the source files schedule.cpp, course.cpp and course.h.  Modify this Makefile to build program foobar from the given source files foobar.cpp, foo.cpp, foo.h, bar.cpp and bar.h.

schedule: schedule.o course.o
	g++ -Wall -pedantic -std=c++11 -o schedule schedule.o course.o

schedule.o: schedule.cpp course.h
	g++ -Wall -pedantic -std=c++11 -c schedule.cpp

course.o: course.cpp course.h
	g++ -Wall -pedantic -std=c++11 -c course.cpp

clean:
	rm -f schedule schedule.o course.o

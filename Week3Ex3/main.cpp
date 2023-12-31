// main.cpp
// Dommaraju, Dhiraj
// ddommaraju
#include <iostream>
using namespace std;

#include "video.h"

int main()
{
	// Create two new Video objects, on the stack.
    Video video1("Title One", "www.youtube.com/one", "Comment ONE", 1.1, 1);
    Video video2("Title Two", "www.youtube.com/two", "Comment TWO", 2.2, 2);

	// Call the print() method of each Video object.
    video1.print();
    video2.print();
	
	// Exit the program with a success status.
	return 0;
}

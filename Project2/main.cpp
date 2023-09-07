// main.cpp
// Dommaraju, Dhiraj
// ddommaraju
#include <iostream>
using namespace std;

#include "video.h"

const int MAX = 100;    // Max number of inputs/Video objects allowed from input.
const string RATING = "rating"; // Constant string for rating.
const string LENGTH = "length"; // Constant string for length.
const string TITLE = "title";   // Constant string for title.

/*
Purpose: Simplified method to check the condition based on ascending
 for title, length & descending for rating.
*/
bool checkCondition(Video* video1, Video* video2, string sortBy) {
    if (sortBy == TITLE) {
        return video1->getTitle()[0] > video2->getTitle()[0];
    } else if (sortBy == LENGTH) {
        return video1->getLength() > video2->getLength();
    }
    return video1->getRating() < video2->getRating();
}

/*
Purpose: Simplified method to sort the video objects based on ascending
 for title, length & descending for rating.
*/
Video* sortVideos(Video* videos[], string sortBy, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (checkCondition(videos[i], videos[j], sortBy)) {
                Video* temp = videos[i];
                videos[i] = videos[j];
                videos[j] = temp;
            }
        }
    }
    return *videos;
}

/*
Purpose: Function used for printing out the whole video objects in sorted order.
*/
void printTheVideos(Video* videos[], int length) {
    int index = 0;
    while (index < length) {
        videos[index]->print();
        index++;
    }
}

int main()
{

    Video* videos[MAX] = {NULL};
    string sortBy;  // stores the type of sort input given by user.
    string title, url, comment; // Temp variables for getting input and storing them in video object.
    float length;
    int rating;
    getline(cin, sortBy);   // Inputs sort by type from the cin.

    int countFlag = 0;
    while(getline(cin, title)) {
        if (countFlag >= MAX) {
            cin.ignore();
            cerr<< "Too many videos, giving up." << endl;
            return 1;
        }
        getline(cin, url);
        getline(cin, comment);
        cin >> length;
        cin >> rating;
        Video* video = new Video(title, url, comment, length, rating);
        videos[countFlag] = video;
        countFlag++;
        cin.ignore();
    }

    // Handles the edge case if user inputs more than 100 inputs.
    if (sortBy != TITLE && sortBy != LENGTH && sortBy != RATING) {
        cerr << sortBy << " is not a legal sorting method, giving up." << endl;
        return 1;
    };

    sortVideos(videos, sortBy, countFlag);     // Sorts the video objects based on user input.
    printTheVideos(videos, countFlag);      // Prints out the sorted video objects in the end.
    return 0;
}

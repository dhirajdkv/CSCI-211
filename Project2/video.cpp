// video.cpp
// Dommaraju, Dhiraj
// ddommaraju
#include <iostream>
using namespace std;

#include "video.h"

/*
Purpose: Constructor for Video Class.
Input Parameters: string title, string url, string comment, float length, int rating
*/
Video::Video(string title, string url, string comment, float length, int rating) {
    this->title = title;
    this->url = url;
    this->comment = comment;
    this->length = length;
    this->rating = rating;
}

/*
Purpose: Forms STAR based rating based on the number of ratings.
Sample Input: rating - 4
Sample Output: ****
*/
string Video::printStars() {
    string stars = "";
    int count = 0;
    while (count < rating) {
        stars += "*";
        count++;
    }
    return stars;
}

/*
Purpose: Prints out the data of Video object in the below printed format.
Sample output: <TITLE>, <URL>, <COMMENT>, <LENGTH>, <RATING STARS>
*/
void Video::print() {
    cout << title << ", " << url << ", " << comment << ", " << length << ", " << printStars() << endl;
}

string Video::getTitle() {
    return this->title;
}

float Video::getLength() {
    return this->length;
}

int Video::getRating() {
    return this->rating;
}

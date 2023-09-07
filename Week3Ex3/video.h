// video.h
// Dommaraju, Dhiraj
// ddommaraju
#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
using namespace std;

class Video {
    public:
        // public member functions
        Video(string title, string url, string comment, float length, int rating);
        void print();
        string printStars();

    private:
        // private member variables
        string title;
        string url;
        string comment;
        float length;
        int rating;
};

#endif
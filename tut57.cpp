#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0;
};
class CWHvideo : public CWH
{
    float videoLength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title" << title << endl;
        cout << "Ratings" << rating << "out of 7 stars" << endl;
        cout << "Length of this video is: " << videoLength << "minutes" << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title" << title << endl;
        cout << "Ratings of this " << rating << "out of 7 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << "words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "Django tutorial";
    vlen = 7.87;
    rating = 6.87;
    CWHvideo djvideo(title, rating, vlen);

    title = "Django tutorial";
    words = 756;
    rating = 6.47;
    CWHvideo djText(title, rating, words);

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djText;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}
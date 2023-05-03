#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string t, float r)
    {
        title = t;
        rating = r;
    }
    virtual void display(){};
};
class video : public CWH
{
    float length;

public:
    video(float l, string t, float r) : CWH(t, r)
    {
        length = l;
    }
    void display()
    {
        cout << "Title of the video is: " << title << endl;
        cout << "Length of the video is: " << length << endl;
        cout << "Rating of the video is: " << rating << " out of 5" << endl
             << endl;
    }
};
class text : public CWH
{
    int words;

public:
    text(int w, string t, float r) : CWH(t, r)
    {
        words = w;
    }
    void display()
    {
        cout << "Title of the text tutorial is: " << title << endl;
        cout << "Words in the text tutorial is: " << words << endl;
        cout << "Rating of the text tutorial is: " << rating << " out of 5 " << endl
             << endl;
    }
};
int main()
{
    int w = 400;
    string s = "Virtual_function";
    float r = 4.5, l = 10.25;

    CWH *ptr[2];

    video v1(l, s, r);
    r = 4.0;
    text t1(w, s, r);

    ptr[0] = &v1;
    ptr[1] = &t1;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}
#include <iostream>
using namespace std;

class box
{
    int l, h, b;

public:
    // box &set_Data(int l, int h, int b)
    box set_Data(int l, int h, int b)
    {
        this->l = l;
        this->h = h;
        this->b = b;
        // return *this;
    }
    void get_Data()
    {
        cout << "Length = " << l << endl;
        cout << "height = " << h << endl;
        cout << "breath = " << b << endl;
        cout << "Volume = " << (l * b * h) << endl;
    }
};
int main()
{
    box *ptr = new box;
    // ptr->set_Data(1, 2, 3).get_Data();
    ptr->set_Data(4, 5, 6);
    ptr->get_Data();

    return 0;
}
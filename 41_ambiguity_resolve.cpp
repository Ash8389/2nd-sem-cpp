#include <iostream>
using namespace std;
class base1
{
    int a;

public:
    int data = 1;
};
class base2
{
    int b;

public:
    int data = 2;
};
class derived : public base1, public base2
{
    int c;

public:
    void display()
    {
        // cout << "Value of data " << data;//It will ambiguity between base1 and base2 data
        cout << "Value of base1 data " << base1::data << endl;
        cout << "Value of base2 data " << base2::data;
    }
};
int main()
{
    derived dev;
    dev.display();

    return 0;
}
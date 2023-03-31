#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "Let's code!" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "Chalo code karte hai!" << endl;
    }
};
class derived : public base1, public base2
{
public:
    void greet()
    {
        base1::greet();
        base2::greet();
    }
};
int main()
{
    derived dev;
    dev.greet();

    return 0;
}
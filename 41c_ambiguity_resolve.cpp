#include <iostream>
using namespace std;

class base1
{
public:
    void message()
    {
        cout << "Let's code!" << endl;
    }
};
class derived : public base1
{
public:
    void message()
    {
        cout << "Write code!";
    }
};
int main()
{
    derived dev;
    dev.message(); // If both base and derived class has same function then derived class function get preferance over base class

    return 0;
}
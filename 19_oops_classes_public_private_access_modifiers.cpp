#include <iostream>
using namespace std;

class input
{
private: // We can not directly access private class
    int a, b, c;

public: // We can directly access public class
    int d, e;
    void set_data(int a, int b, int c); // Declaration
    void get_data()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    }
};

void input::set_data(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    input ch;
    ch.d = 4; // Changing public class
    ch.e = 5; // Changing public class
    // ch.a = 6; //It will give error because it is in private class
    ch.set_data(1, 2, 3);
    ch.get_data();
    return 0;
}
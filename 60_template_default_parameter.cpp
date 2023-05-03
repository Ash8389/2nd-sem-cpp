#include <iostream>
using namespace std;

template <class T1, class T2 = float, class T3 = int>
class any
{
    T1 data1;
    T2 data2;
    T3 data3;

public:
    any(T1 data1, T2 data2, T3 data3)
    {
        this->data1 = data1;
        this->data2 = data2;
        this->data3 = data3;
    }
    void display()
    {
        cout << "Data1 = " << data1 << endl;
        cout << "Data2 = " << data2 << endl;
        cout << "Data3 = " << data3 << endl;
    }
};
int main()
{
    any<char, char> a1('m', 'A', 25); // We give T1 as char datatype and change T2 from float to char and T3 remain as int
    a1.display();

    return 0;
}
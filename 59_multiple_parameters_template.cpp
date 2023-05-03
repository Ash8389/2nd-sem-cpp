#include <iostream>
using namespace std;

template <class T1, class T2>
class twotype
{
    T1 data1;
    T2 data2;

public:
    twotype(T1 data1, T2 data2)
    {
        this->data1 = data1;
        this->data2 = data2;
    }
    void display()
    {
        cout << "Data1 = " << data1 << endl;
        cout << "Data2 = " << data2 << endl;
    }
};

int main()
{
    twotype<int, char> t1(4, 'a');
    t1.display();

    return 0;
}
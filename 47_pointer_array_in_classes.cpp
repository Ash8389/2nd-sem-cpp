#include <iostream>
using namespace std;

class base
{
    int a;

public:
    void set_Data(int b)
    {
        a = b;
    }
    void get_Data()
    {
        cout << "a = " << a << endl;
    }
};
int main()
{
    base *ptr = new base[3];
    base *ptr2 = ptr;
    int a;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the value of a for " << i + 1 << ": ";
        cin >> a;
        ptr->set_Data(a);
        ptr++;
    }
    for (int i = 0; i < 3; i++)
    {
        ptr2->get_Data();
        ptr2++;
    }

    return 0;
}
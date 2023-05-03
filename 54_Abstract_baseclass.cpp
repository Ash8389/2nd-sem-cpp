#include <iostream>
using namespace std;

class base
{
protected:
    int var_base;

public:
    base(int a)
    {
        var_base = a;
    }
    virtual void display() = 0; // This is called abstract,
};
class derived : public base
{
    int var_derived;

public:
    derived(int a, int b) : base(a)
    {
        var_derived = b;
    }
    void display()
    {
        cout << "Base variable = " << var_base << endl;
        cout << "Derived vaiavle = " << var_derived << endl;
    }
};
int main()
{
    int a, b;
    cout << "Enter the value of base & derived: ";
    cin >> a >> b;

    base *ptr;
    derived d1(a, b);
    ptr = &d1;
    ptr->display();
    return 0;
}
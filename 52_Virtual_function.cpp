#include <iostream>
using namespace std;
class base
{
protected:
    int var_base;

public:
    void set_var_base(int a)
    {
        var_base = a;
    }
    virtual void get_data()
    {
        cout << "The value of base variable = " << var_base << endl;
    }
};
class derived : public base
{
    int var_derived = 2;

public:
    virtual void get_data()
    {
        cout << "Using derived get value of base variable = " << var_base << endl;
        cout << "The value of derived variable = " << var_derived << endl;
    }
};
int main()
{
    base *ptr_base;
    base b1;
    derived d1;
    ptr_base = &d1;
    // ptr_base->set_var_derived(8);//This will give an error only same name member can be accessable
    ptr_base->set_var_base(5);
    ptr_base->get_data();

    return 0;
}
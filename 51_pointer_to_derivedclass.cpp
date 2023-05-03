#include <iostream>
using namespace std;

class base
{
protected:
    int data_Base;

public:
    base set_Base_Data(int data_Base)
    {
        this->data_Base = data_Base;
        return *this;
    }
    void get_data()
    {
        cout << "The value of base data = " << data_Base << endl;
    }
};

class derived : public base
{
    int data_derived;

public:
    derived set_Derived_Data(int data_derived)
    {
        this->data_derived = data_derived;
        return *this;
    }
    base get_data() // We are returning base class object, by which we can access base class member
    {
        cout << "The value of derived data = " << data_derived << endl;
        cout << "The value of base data = " << data_Base << endl;
        return *this;
    }
};

int main()
{
    base *ptr_b1;
    base b1;
    derived d1, d2;
    ptr_b1 = &d1; // Pointing base class pointer to derived class

    // ptr_b1->set_Derived_Data(6); //--->Will throw an error
    ptr_b1->set_Base_Data(4).get_data(); //---->It will return the data of base class get_data member, though it pointing to derived class

    derived *ptr_d1;
    ptr_d1->set_Base_Data(3);
    ptr_d1->set_Derived_Data(5).get_data().set_Base_Data(2).get_data(); /*We can access set_Base_Data of base class using derived class member,
    because we are returning base class using derived class member*/

    return 0;
}
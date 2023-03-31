#include <iostream>
using namespace std;

class Y;
class X
{
    int data;

    friend void sum(Y, X);

public:
    void setvalue(int val)
    {
        data = val;
    }
};
class Y
{
    int data;

    friend void sum(Y, X);

public:
    void setvalue(int val)
    {
        data = val;
    }
};
void sum(Y n1, X n2)
{
    cout << "The value of " << n1.data << " + " << n2.data << " = " << n1.data + n2.data << endl;
}
int main()
{
    Y f1;
    X f2;

    f1.setvalue(4);
    f2.setvalue(6);
    sum(f1, f2);
    return 0;
}
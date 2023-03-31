#include <iostream>
using namespace std;

class second;
class first
{
    int data1;
    friend void exchange(first &, second &);

public:
    void setdata(int val)
    {
        data1 = val;
    }
    void display()
    {
        cout << "The value of data1 is: " << data1 << endl;
    }
};
class second
{
    int data2;
    friend void exchange(first &, second &);

public:
    void setdata(int val)
    {
        data2 = val;
    }
    void display()
    {
        cout << "The value of data2 is: " << data2 << endl;
    }
};
void exchange(first &x, second &y)
{
    int temp = x.data1;
    x.data1 = y.data2;
    y.data2 = temp;
}
int main()
{
    first v1;
    second v2;

    v1.setdata(20);
    v2.setdata(40);
    cout << "Value before exchangeing the value is:" << endl;

    v1.display();
    v2.display();

    exchange(v1, v2);
    cout << "Value after exchangeing the value is:" << endl;

    v1.display();
    v2.display();
    return 0;
}
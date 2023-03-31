#include <iostream>
using namespace std;

class base
{
    int data;

public:
    void setdata()
    {
        data = 4;
    }
    void getdata()
    {
        cout << "The value of data is:" << data << endl;
    }
};
class base2
{
    int data;

public:
    base2(int a)
    {
        cout << "Constructor revoked" << endl;
        data = a;
    }
    void getdata()
    {
        cout << "The value of data is:" << data << endl;
    }
};
int main()
{
    base *bp;
    bp->setdata();
    bp->getdata();

    base2 *bp2 = new base2(2);
    bp2->getdata();

    return 0;
}
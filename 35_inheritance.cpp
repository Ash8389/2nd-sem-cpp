#include <iostream>
using namespace std;

class employee
{
    int marks;

public:
    int id = 011;
    int salary = 5000;
};
class coder : employee
{
public:
    coder(int data)
    {
        id = data;
    }
    void set_data()
    {
        salary = 10000;
    }
    void get_data()
    {
        cout << "id = " << id << endl;
        cout << "salary = " << 1002 << endl;
    }
};
int main()
{
    employee e1, e2;
    cout << e1.id << endl;
    cout << e1.salary << endl;
    coder c(2);
    c.get_data();

    return 0;
}
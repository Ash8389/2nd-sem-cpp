#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 122;
        cout << "Enter the id of employee: ";
        cin >> id;
    }
    void getid(void)
    {
        cout << "The id of this employee is: " << id << " and salary is: " << salary << endl;
    }
};
int main()
{
    // employee ash, aditya, ansh, kunal;

    // ash.setid();
    // ash.getid();

    // aditya.setid();
    // aditya.getid();

    // ansh.setid();
    // ansh.getid();

    // kunal.setid();
    // kunal.getid();

    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}
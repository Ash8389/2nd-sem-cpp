#include <iostream>
using namespace std;

// typedef struct employee
// {
//     int id;
//     string name;
//     float salary;
// } em;

// int main()
// {
//     em a1, a2;
//     a1.id = 100;
//     a1.name = "Ashish Kumar Jha";
//     a1.salary = 4500.25;
//     a2.id = 101;
//     a2.name = "Aditya Kumar Jha";
//     a2.salary = 4700.25;

//     cout << a1.id << endl;
//     cout << a1.name << endl;
//     cout << a1.salary << endl;
//     cout << a2.id << endl;
//     cout << a2.name << endl;
//     cout << a2.salary << endl;
//     return 0;
// }
// typedef union money
// {
//     int rice;
//     float pound;
//     char car;
// } mny;
// int main()
// {
//     mny m1;
//     // m1.rice = 54;
//     m1.car = 'a';
//     cout << m1.car;
//     return 0;
// }
int main()
{
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    meal m1 = lunch;
    cout << (m1 == 0) << endl;
    for (int i = breakfast; i <= dinner; i++)
    {
        cout << i << endl;
    }

    return 0;
}
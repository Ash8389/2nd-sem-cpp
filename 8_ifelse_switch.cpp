#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18 && age <= 20)
    {
        cout << "Go to teenagers section\n";
    }
    else if (age > 20)
    {
        cout << "You came come\n";
    }
    else
    {
        cout << "You are kid now\n";
    }

    // With break statement
    //  int a = 2;

    // switch (a)
    // {
    // case 1:
    //     cout << "value of a is 1";
    //     break;
    // case 2:
    //     cout << "value of a is 2";
    //     break;
    // case 3:
    //     cout << "value of a is 3";
    //     break;
    // default:
    //     cout << "Unknown value";
    //     break;
    // }

    // Without break
    // int a = 2;
    // switch (a)
    // {
    // case 1:
    //     cout << "value of a is 1\n";

    // case 2:
    //     cout << "value of a is 2\n";

    // case 3:
    //     cout << "value of a is 3\n";

    // default:
    //     cout << "Unknown value\n";
    // }

    return 0;
}
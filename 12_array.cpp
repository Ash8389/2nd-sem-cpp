#include <iostream>
using namespace std;

int main()
{
    // int marks[] = {25, 67, 89, 95};
    // cout << "Marks of 1 student is: " << marks[0] << endl;
    // cout << "Marks of 2 student is: " << marks[1] << endl;
    // cout << "Marks of 3 student is: " << marks[2] << endl;
    // cout << "Marks of 4 student is: " << marks[3] << endl;
    // int mathmarks[] = {56, 76, 45, 75};
    // mathmarks[1] = 72; // we can change the value
    // cout << "Marks of math of 1 student is: " << mathmarks[0] << endl;
    // cout << "Marks of math of 2 student is: " << mathmarks[1] << endl;
    // cout << "Marks of math of 3 student is: " << mathmarks[2] << endl;
    // cout << "Marks of math of 4 student is: " << mathmarks[3] << endl;

    // array using loop
    // int mark[4];
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "Enter the mark of " << (i + 1) << " student: ";
    //     cin >> mark[i];
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The marks of student 1 is: " << mark[i] << endl;
    // }

    // Array using pointers
    int mark[4];
    int *ptr = mark;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the mark of " << (i + 1) << " student: ";
        cin >> *(i + ptr);
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "The marks of student i " << (i + 1) << " is: " << *(i + ptr) << endl;
    }

    return 0;
}
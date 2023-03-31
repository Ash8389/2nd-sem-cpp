#include <iostream>
using namespace std;

int main()
{
    // break
    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i == 5)
    //     {
    //         break;
    //     }
    //     cout << i << endl;
    // }

    // continue
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}
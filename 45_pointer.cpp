#include <iostream>
using namespace std;

int main()
{
     int a = 4;
     int *p = &a;
     cout << "The value of a is: " << *p << endl
          << endl;

     // New operator

     int *ptr = new int;
     *ptr = 5;
     cout << "ptr = " << *ptr << endl
          << endl;

     float *ptr2 = new float;
     *ptr2 = 22.15;
     cout << "ptr2 = " << *ptr2 << endl
          << endl;

     int *ptr3 = new int[5];
     ptr[0] = 1;
     ptr[1] = 2;
     ptr[2] = 3;
     ptr[3] = 4;
     ptr[4] = 5;
     cout << "ptr[1] = " << ptr[0] << endl;
     cout << "ptr[2] = " << ptr[1] << endl;
     cout << "ptr[3] = " << ptr[2] << endl;
     cout << "ptr[4] = " << ptr[3] << endl;
     cout << "ptr[5] = " << ptr[4] << endl;

     delete[] ptr;

     cout << "ptr[1] = " << ptr[0] << endl;
     cout << "ptr[2] = " << ptr[1] << endl;
     cout << "ptr[3] = " << ptr[2] << endl;
     cout << "ptr[4] = " << ptr[3] << endl;
     cout << "ptr[5] = " << ptr[4] << endl;

     return 0;
}
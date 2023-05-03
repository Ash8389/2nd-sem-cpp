#include <iostream>
using namespace std;

template <class T1, class T2>
float avg(T1 num1, T2 num2)
{
    float a = (num1 + num2) / 2; // For making average in float we have to make 2 as 2.0 otherwise it return intiger type value
    return a;
}

int main()
{
    float a;
    a = avg<float, int>(2, 3); // It will take 2 as a float and 3 as int
    cout << "Average = " << a << endl;
    a = avg(2, 3); // It automatically take its defalut data type as int
    cout << "Average = " << a << endl;
    a = avg(2.0, 3); // It automatically take 2.0 as float and 3 as int
    cout << "Average = " << a << endl;
    return 0;
}
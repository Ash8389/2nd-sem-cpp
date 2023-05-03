#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;

    vector(int size)
    {
        this->size = size;
        arr = new T[this->size];
    }

    T dotproduct(vector v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    // vector<int> v1(3), v2(3);
    // v1.arr[0] = 1;
    // v1.arr[1] = 2;
    // v1.arr[2] = 3;

    // v2.arr[0] = 5;
    // v2.arr[1] = 1;
    // v2.arr[2] = 7;
    // int d = v1.dotproduct(v2);

    vector<float> v1(3), v2(3);
    v1.arr[0] = 1.5;
    v1.arr[1] = 2.1;
    v1.arr[2] = 3.6;

    v2.arr[0] = 5.4;
    v2.arr[1] = 1.9;
    v2.arr[2] = 7.1;

    float d = v1.dotproduct(v2);

    cout << d << endl;

    return 0;
}
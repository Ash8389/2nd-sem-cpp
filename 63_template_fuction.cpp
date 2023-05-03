#include <iostream>
using namespace std;
template <class T>
class base
{
    T data;

public:
    base(T a) : data(a)
    {
        data = a;
        cout << "Base contructor called" << endl;
    }
    void display();
};
template <class T>
void base<T>::display()
{
    cout << "The value of data: " << data << endl;
}
int main()
{
    base<char> b('A');
    b.display();

    return 0;
}
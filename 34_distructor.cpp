#include <iostream>
using namespace std;

class point
{
    int x;
    int y;

public:
    point(int, int);
    ~point(); // It will automatically when function is finished
};
point ::point(int a, int b)
{
    x = a;
    y = b;
}
point ::~point()
{
    cout << "The value of x = " << x << endl;
    cout << "The value of y = " << y << endl;
}
int main()
{
    point p(5, 4);
    return 0;
}
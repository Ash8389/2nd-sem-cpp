#include <iostream>
using namespace std;

class point
{
    int x;
    int y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "The point is: (" << x << "," << y << ")" << endl;
    }
};
int main()
{
    point p1(5, 6);
    point p2(9, 2);

    p1.display();
    p2.display();

    return 0;
}
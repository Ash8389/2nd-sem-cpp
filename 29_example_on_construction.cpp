#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x;
    int y;

    friend int distance(point, point);

public:
    point(int, int);
};
point::point(int a, int b)
{
    x = a;
    y = b;
}
int distance(point p1, point p2)
{
    cout << "x1 = " << p1.x << ", x2 = " << p2.x << ", y1 = " << p1.y << ", y2 = " << p2.y << endl
         << endl;
    int d = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return d;
}
int main()
{
    int n1, n2, n3, n4;

    cout << "Enter (x1 , y1): ";
    cin >> n1 >> n2;
    cout << "Enter (x2 , y2): ";
    cin >> n3 >> n4;
    cout << endl;

    point s1(n1, n2);
    point s2(n3, n4);
    int d = distance(s1, s2);
    cout << "Distance between the points is: " << d << endl;

    return 0;
}
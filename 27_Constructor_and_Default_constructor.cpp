#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(void);
    void display()
    {
        cout << "The value is: " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(void) // This is defalut Constructor as it takes no parameter
{
    a = 6;
    b = 4;
    cout << "Hello world!\n";
}
int main()
{
    complex x, y;
    x.display();
    y.display();

    return 0;
}
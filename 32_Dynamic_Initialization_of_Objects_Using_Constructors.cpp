#include <iostream>
using namespace std;

class BankDiposit
{
    int principal;
    int year;
    float investrate;
    float returnvalue;

public:
    BankDiposit() {}
    BankDiposit(int, int, float);
    BankDiposit(int, int, int);
    void display()
    {
        cout << "The principal value is: " << principal << " , year is: " << year << endl;
        cout << "Your return of investment is: " << returnvalue << endl;
    }
};
BankDiposit::BankDiposit(int p, int y, float r)
{
    principal = p;
    year = y;
    investrate = r;
    returnvalue = principal;
    for (int i = 1; i <= year; i++)
    {
        returnvalue = returnvalue * (1 + investrate);
    }
}
BankDiposit::BankDiposit(int p, int y, int r)
{
    principal = p;
    year = y;
    investrate = (float)r / 100;
    returnvalue = principal;
    for (int i = 1; i <= year; i++)
    {
        returnvalue = returnvalue * (1 + investrate);
    }
}
int main()
{
    BankDiposit d1, d2;
    int p, y;
    int R;
    float r;

    cout << "Enter the value of p, y and r: ";
    cin >> p >> y >> r;

    d1 = BankDiposit(p, y, r);
    d1.display();
    cout << "Enter the value of p, y and R: ";
    cin >> p >> y >> R;
    d2 = BankDiposit(p, y, R);
    d2.display();
    return 0;
}
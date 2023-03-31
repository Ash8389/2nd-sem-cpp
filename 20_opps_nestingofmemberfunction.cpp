#include <iostream>
#include <string>
using namespace std;

class binary
{
    string b;

public:
    void read(void);
    void chk_binary(void);
    void ones_compliment();
    void display(void);
};
void binary::read(void)
{
    cout << "Enter the binary number :" << endl;
    cin >> b;
    chk_binary(); // Nesting of member in classes
}
void binary::chk_binary(void)
{
    for (int i = 0; i < b.length(); i++)
    {
        if (b.at(i) != '0' && b.at(i) != '1')
        {
            cout << "Incorrect binary format";
            exit(0);
            // read();
        }
    }
    display();         // Nesting of member in classes
    ones_compliment(); // Nesting of member in classes
}
void binary::ones_compliment(void)
{
    for (int i = 0; i < b.length(); i++)
    {
        if (b.at(i) == '1')
        {
            b.at(i) = '0';
        }
        else
        {
            b.at(i) = '1';
        }
    }
}
void binary::display(void)
{
    cout << "Dispalying your binary number: ";
    for (int i = 0; i < b.length(); i++)
    {
        cout << b.at(i);
    }
    cout << endl;
}

int main()
{
    binary bin;
    bin.read();
    // bin.chk_binary();
    // bin.diaplay();
    // bin.ones_compliment();
    bin.display();
    return 0;
}
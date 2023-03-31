#include <iostream>
using namespace std;

class shop
{
    int item_ID[100];
    int item_price[100];
    int count;

public:
    void counter(void) { count = 0; }
    void getprice(void);
    void displayprice(void);
};

void shop::getprice(void)
{
    cout << "Enter the ID of your item : ";
    cin >> item_ID[count];
    cout << "Enter the price of item with ID " << item_ID[count] << " : ";
    cin >> item_price[count];
    count++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "The price of item with ID " << item_ID[i] << " is : " << item_price[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of item you have: " << endl;
    cin >> n;

    shop s;
    s.counter();
    for (int i = 0; i < n; i++)
    {
        s.getprice();
    }
    s.displayprice();

    return 0;
}
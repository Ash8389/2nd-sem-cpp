#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void set_id(void)
    {
        cout << "Enter the Id of employee: ";
        cin >> id;
        count++;
    }
    void display_id(void)
    {
        cout << "The Id of employee " << count << " is: " << id << endl;
    }
    static void get_count(void)
    {
        // cout << "The Id of employee " << id << endl; // it gives error, it is not a static member function
        cout << "The value of count is: " << count << endl;
    }
};
int employee::count;

int main()
{
    employee Ash, Ad, Ask;
    Ash.set_id();
    Ash.display_id();
    // Ash.get_count();
    employee::get_count();

    Ad.set_id();
    Ad.display_id();
    // Adi.get_count();
    employee::get_count();

    Ask.set_id();
    Ask.display_id();
    // Ask.get_count();
    employee::get_count();

    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st1, st2;
    cout << "Enter you want to store: ";
    getline(cin, st1);
    ofstream set("56_sample.txt");
    set << st1;
    set.close(); // It is important to close the object for read the value

    ifstream get("56_sample.txt");
    getline(get, st2);
    // get >> st2;
    cout << "This is written in a file: " + st2;
    get.close();

    return 0;
}
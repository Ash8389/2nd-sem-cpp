#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m1; // It will store in a alphabatical order
    m1["Ash"] = 100;
    m1["Pik"] = 101;
    m1["Suick"] = 102;
    m1["Qhade"] = 103;

    map<string, int>::iterator it;

    for (it = m1.begin(); it != m1.end(); it++)
    {
        cout << (*it).first << " = " << (*it).second << endl;
    }
    cout << "*****After inserting new element*****" << endl;
    m1.insert({{"Hello", 104}, {"Enter", 105}});
    for (it = m1.begin(); it != m1.end(); it++)
    {
        cout << (*it).first << " = " << (*it).second << endl;
    }

    return 0;
}
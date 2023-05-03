#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("57_sample.txt");

    out << "This is me\n";
    out << "This is also me";

    out.close();

    string str;
    ifstream in;
    in.open("57_sample.txt");

    while (in.eof() == 0)
    {
        getline(in, str);
        cout << str << endl;
    }

    return 0;
}
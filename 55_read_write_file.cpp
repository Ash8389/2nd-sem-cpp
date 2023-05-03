#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st = "Hello, I'm Ashish", st2;
    ofstream set("55_sample_write_file.txt"); // If we don't create file it automatically create a file
    set << st;

    ifstream get("55_sample_read_file.txt");
    // in >> st2; // It only store first word of a file
    // cout << st2;
    getline(get, st2); // It reads first line from a file
    cout << st2;
    getline(get, st2); // It reads second line from a file
    cout << st2;

    return 0;
}
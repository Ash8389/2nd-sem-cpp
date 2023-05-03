#include <iostream>
#include <vector>
using namespace std;

void display(vector<char> &vec)
{
    cout << "size of: " << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    // cout << "~" << vec.at(2) << endl;
}
void input(vector<int> &vec, int size)
{
    int element, i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        vec.push_back(element);
    }
}
int main()
{
    // int size, element, i;
    // cout << "Enter the size: ";
    // cin >> size;

    // vector<int> vec1;
    // input(vec1, size);
    // cout << "*******Before pop******" << endl;
    // display(vec1);
    // vec1.pop_back();
    // cout << "*******after pop******" << endl;
    // display(vec1);

    // vector<int> vec2(size);
    // vector<int>::iterator itr = vec2.begin();
    // input(vec2, size); //Push_back increase size of vector by 1
    // cin >> vec2[1]; // It is good method to store vector if it's size is deffined
    // cin >> vec2[2];
    // cin >> vec2[3];
    // display(vec2);
    // vec2.insert(itr + 1, 500, 567);
    // display(vec2);

    vector<char> vec3(3, 'g'); // It will make vector of size 3 and store 'g' on it
    display(vec3);

    vector<char> vec4(vec3); // It will make vector which is acopy of vec3
    display(vec4);
    return 0;
}
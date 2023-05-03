#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}
void input(list<int> &lst, int size)
{
    int element;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: ";
        cin >> element;
        lst.push_back(element);
    }
}
int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;
    list<int> list1;
    list<int>::iterator iter = list1.begin();

    list1.insert(iter, 2, 54);
    input(list1, size);
    cout << "List-1 element after insert 54 2 times at begin" << endl;
    display(list1);

    cout << "List-1 element after insert 56 after input the element" << endl;
    list1.insert(iter, 56);
    display(list1);

    cout << "List-1 element after poping element from front" << endl;
    list1.pop_front(); // It will delete one element from front
    display(list1);

    int size2;
    cout << "Enter the size: ";
    cin >> size2;
    list<int> list2;
    // list<int>::iterator iter2 = list2.begin();
    input(list2, size2);
    cout << "List-2 element" << endl;
    display(list2);

    list1.merge(list2);
    cout << "after merging list2 with list1" << endl;
    display(list1);

    cout << "After sorting list1 element" << endl;
    list1.sort();
    display(list1);

    int del;
    cout << "Enter the element you want to remove" << endl;
    cin >> del;
    list1.remove(del);
    cout << "After removing" << del << " from List-1" << endl;
    display(list1);

    list1.reverse();
    cout << "After reversing List-1" << endl;
    display(list1);

    return 0;
}
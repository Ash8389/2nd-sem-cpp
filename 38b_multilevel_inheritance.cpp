#include <iostream>
using namespace std;

class student
{
protected:
    int rollno;

public:
    void setrollno(int rn)
    {
        rollno = rn;
    }
};
class marks : public student
{
protected:
    int math;
    int physics;

public:
    void setmarks(float m, float p)
    {
        math = m;
        physics = p;
    }
};
class result : public marks
{
public:
    void display()
    {
        cout << "Roll no." << rollno << " you got " << math << " marks in math" << endl;
        cout << "Roll no." << rollno << " you got " << physics << " marks in physics" << endl;
        cout << "Roll no." << rollno << " you got " << ((math + physics) / 2) << " %" << endl;
    }
};
int main()
{
    result ash;
    ash.setrollno(101);
    ash.setmarks(98.00, 90.00);
    ash.display();
    return 0;
}
#include <iostream>
using namespace std;
class student
{
    int rollno;

public:
    void set_roll(int a)
    {
        rollno = a;
    }
    void print_roll()
    {
        cout << "Roll no.: " << rollno << endl;
    }
};
class subject : virtual public student
{
protected:
    float phy;
    float math;

public:
    void set_marks(float a, float b)
    {
        phy = a;
        math = b;
    }
    void print_marks()
    {
        cout << "You got " << phy << " in physics" << endl;
        cout << "You got " << math << " in maths" << endl;
    }
};
class sports : virtual public student
{
protected:
    int score;

public:
    void set_score(int a)
    {
        score = a;
    }
    void print_score()
    {
        cout << "You got " << score << " score in P.T" << endl;
    }
};
class result : public subject, public sports
{
    float total;

public:
    void display()
    {
        total = phy + math + score;
        print_roll();
        print_marks();
        print_score();
        cout << "You got total " << total << " marks" << endl;
    }
};
int main()
{
    result ash;
    ash.set_roll(101);
    ash.set_marks(98.1, 97.55);
    ash.set_score(90);
    ash.display();

    return 0;
}
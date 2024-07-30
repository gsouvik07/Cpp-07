#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "your roll no is :" << roll_no << endl;
    }
};
class test : public virtual Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your result is here :" << endl
             << "Maths:" <<maths<< endl
             << "physics:" <<physics<<endl;
    }
};
class Sports : public virtual Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is :" <<score<< endl;
    }
};
class Result : public test, public Sports
{
private:
    float Total;

public:
    void display(void)
    {
        Total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your Total score is :" << Total << endl;
    }
};

int main()
{
    Result souvik;
    souvik.set_number(1530);
    souvik.set_marks(99.0, 94.0);
    souvik.set_score(9);
    souvik.display();
    return 0;
}
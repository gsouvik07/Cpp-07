#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 150;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "The id of this Employee is " << id << endl;
    }
};

int main()
{
    Employee fb[50];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getid();
    }
    return 0;
}
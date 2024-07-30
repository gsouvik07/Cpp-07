#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public:
    void setData(void){
        cout << "Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout << "The id of this employee is " <<id<<"and this is employee number" << count <<endl;
    }
    static void getCount(void){
        cout<<"The value of cout is " <<count<<endl;
    }
};

int Employee::count;

int main(){
    Employee souvik,harry,rohan;

    souvik.setData();
    souvik.getData();
    Employee::getCount();

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();
    return 0;
}
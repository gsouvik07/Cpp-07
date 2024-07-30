#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    float salary;
    Employee(int inpId){
        id = inpId;
        salary = 170;
    }
    Employee(){}
};

class programmer : public Employee{
    public:
    int languageCode;
    programmer(int inpId){
        id = inpId;
        languageCode = 9;

    }
    void getData(){
        cout<<id<<endl;
    }
};


int main(){
    Employee souvik(7), rohan(2);
    cout <<souvik.salary <<endl;
    cout <<rohan.salary <<endl;
    programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();

    return 0;
}
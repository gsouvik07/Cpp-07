#include<iostream>
using namespace std;

class Employee
{
    private:
    int a , b , c;
    public:
    int d , e;
    void setData(int a1, int b1, int c1);
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void Employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee gs;
    //gs.a = 177;
    gs.d = 34;
    gs.e = 89;
    gs.setData(1,2,4);
    gs.getData();
    return 0;
}
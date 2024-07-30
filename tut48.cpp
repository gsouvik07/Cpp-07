#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"base1 Class constructor called"<<endl;
    }
    void printdataBase1(void){
        cout<<"the value of data1 is "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"base2 Class constructor called"<<endl;
    }
    void printdataBase2(void){
        cout<<"the value of data2 is "<<data2<<endl;
    }
};
class Derived : public Base2, public Base1{
    int derived1, derived2;
    public:
    Derived(int a, int b, int c, int d) : Base2(b),Base1(a){
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor called"<<endl;
    }
    void printDataDerived(void){
        cout<<"This value Derived1 is "<<derived1<<endl;
        cout<<"This value Derived2 is "<<derived2<<endl;
    }

};


int main(){
    Derived souvik(7, 8, 9, 10);
    souvik.printdataBase1();
    souvik.printdataBase2();
    souvik.printDataDerived();
    
    return 0;
}
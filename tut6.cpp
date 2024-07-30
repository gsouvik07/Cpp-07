// There are two types of hader files:
// 1. System hader files: It comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" //-->this will produse an error if this.h is no present in the current directory

using namespace std;

int main(){
    int a =4,b=5;
    cout<<"operators in C++:"<<endl;
    cout<<"following are the types of operartors in C++"<<endl;
    //arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl;
    cout<<"The value of a -- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    //assigment operators--> used to assign values to variables
    // int a = 3,b=9;
    //char d='d';

    //Comparion operators
    cout<<"following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;

    //Logical operators
    cout<<"Flowing are the logical  operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;


    return 0;
}
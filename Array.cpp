#include<iostream>
using namespace std;

int main(){
    int marks[4] = {23, 45, 56, 89};
    int mathmarks[4];
    mathmarks[0] = 2278;
    mathmarks[1] = 278;
    mathmarks[2] = 227;
    mathmarks[3] = 228;

    cout<<"These are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    marks[2] = 455;
    cout<<mathmarks[3]<<endl;
    cout<<"These are marks"<<endl;

    for (int i = 0; i < 4; i++)
    {
       cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    //pointers and arrays
    int* p = marks;
    cout<<*(p++);
    cout<<*p;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}
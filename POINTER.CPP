#include<iostream>
using namespace std;

int main(){
int a =7;
  int* ptr = &a;
    cout <<"address of a is "<< &a << endl;
    cout <<"Value Stored at ptr is: " << ptr <<endl;
    cout <<"Value ptr is pointing to is: "<< *ptr << endl;
    return 0;
}

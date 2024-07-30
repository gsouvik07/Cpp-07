#include<iostream>
using namespace std;

int sum(int a,int b){
    int c = a+b;
    return c;
}
//This will not swap a and b
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swappointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//call by referance using c++ reference varibales
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a=4,b=5;
    //cout<<"The sum of 4 and 5 is "<<sum(a,b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    //swap(a,b);
    swapReferenceVar(a , b); //this will swap a and b using reference variables
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}
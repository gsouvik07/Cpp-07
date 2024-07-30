#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;

    public:
    Simple(int a, int b = 7, int c = 9){
        data1 = a;
        data2 = b;
        data3 = c;

    }
    void printdata();
};

void Simple :: printdata(){
    cout<<"Your value of data1 , data2 and data3 is "<<data1<<","<<data2<<"and"<<data3<<endl;
}


int main(){
    Simple s(12);
    s.printdata();
    return 0;
}
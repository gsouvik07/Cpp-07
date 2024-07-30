#include<iostream>
using namespace std;

class B{
    public:
    void say(){
        cout<<"I am Souvik"<<endl;
    }
};
class D : public B{
    int a;
    public:
    void say(){
       // cout <<"ami Souvik"<<endl;
    }
};

int main(){
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}
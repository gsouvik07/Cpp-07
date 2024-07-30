#include<iostream>
using namespace std;

struct employee
{
    /* data */
    int eId;
    char favchar;
    float salary;
};


union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
    enum meal{breakfast,lunch,dinner};
    meal m1= breakfast;
    cout<<(m1==2);
    //cout<<breakfast<<endl;
    //cout<<lunch<<endl;
    //cout<<dinner<<endl;
   // union money m1;
   // m1.rice=34;
    //cout<<m1.rice;

    return 0;
}
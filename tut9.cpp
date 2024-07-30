#include<iostream>

using namespace std;

int main(){
    //cout<<"This is tutorial 9";
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    //if((age<18) && (age<0)){
       //cout<<"You can not come to my party"<<endl;
    //}
    //else if(age==18){
        //cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    //}
    //else if(age<1){
        //cout<<"you are not yet born"<<endl;
    //}
    //else{
        //cout<<"You can come to the party"<<endl;
    //}
    //switchcase statement:
    switch (age)
    {
        case 18:
        /* code */
        cout<<"you are 18";
        //break;
        case 22:
        /* code */
        cout<<"you are 22"<<endl;
        //break;
        case 2:
        /* code */
        cout<<"you are 2"<<endl;
        //break;

        default:
        cout<<"No special cases"<<endl;
        //break;
    }

    return 0;
}
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream hout("sammple61.txt");

    string name;
    cout<<"Enter your name: ";
    cin>>name;

    hout<<name+" is my name";

    hout.close();

    ifstream hin("sample61.txt");

    string content;
    getline(hin, content);
    cout<<"The content of the file is: "<<content;

    hin.close();
    return 0;
}
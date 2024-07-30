#include<iostream>
#include<fstream>
using namespace std;


int main(){
    
// ofstream out;
// out.open("sample62.txt");

// out<<"This is me\n";
// out<<"This is also mine ";

// out.close();

ifstream in;
string st;
in.open("sample62.txt");
while(in.eof()==0){
    getline(in, st);
    cout<<st<<endl;
}

    return 0;
}
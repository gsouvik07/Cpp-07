#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int j = 1;
    while(j <= n){
        int col = 1;
        while(col <=n){
            char ch = 'A'+j-1;
            cout<<ch;
            col = col +1;
        }
        cout<<endl;
        j = j + 1;
    }
    return 0;
}
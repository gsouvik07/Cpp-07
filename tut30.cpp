#include<iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int) ;
    void printNumber()
    {
        cout << "Your Number is " << a << "+" << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
    //cout<<"Hello Souvik" << endl;
}


int main(){

    Complex a(4, 6);
    a.printNumber();

    Complex b = Complex(5,7);
    b.printNumber();

    return 0;
}
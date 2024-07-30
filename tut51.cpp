#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is : " << real << endl;
        cout << "The imaginary part is : " << imaginary << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    Complex *ptr = new Complex;
    ptr->setdata(7, 78);
    (*ptr).getData();

    Complex *ptr1 = new Complex[7];
    ptr1->setdata(1, 7);
    ptr1->getData();
    return 0;
}
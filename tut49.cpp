#include <iostream>
using namespace std;

class Test
{ 
    int a;
    int b;

public:
    //Test(int s, int p) : a(s), b(a*p)
    //Test(int s, int p) : b(p), a(1+b)
    Test(int x, int y) : a(x), b(a+y)
    {
        cout << "constructor executed" << endl;
        cout << "value of a is :" << a << endl;
        cout << "value of b is :" << b << endl;
    }
};
int main()
{
    Test t(7, 9);

    return 0;
}
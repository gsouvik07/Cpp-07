#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperationsSimple()
    {
        cout << "Ths value of a + b is: " << a + b << endl;
        cout << "Ths value of a - b is: " << a - b << endl;
        cout << "Ths value of a * b is: " << a * b << endl;
        cout << "Ths value of a / b is: " << a / b << endl;
    }
};
class scientificCalculator
{
    int a, b;

public:
    void getDataScience()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void performOperationsScientific()
    {
        cout << "The  value of sin(a) is :" << sin(a) << endl;
        cout << "The  value of sin(b) is :" << sin(b) << endl;
        cout << "The  value of log(a) is :" << log(a) << endl;
        cout << "The  value of log(b) is :" << log(b) << endl;
    }
};
class HybridCalculator : public SimpleCalculator, public scientificCalculator
{
};
int main()
{
    HybridCalculator calc;
    calc.getDataScience();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();
    return 0;
}
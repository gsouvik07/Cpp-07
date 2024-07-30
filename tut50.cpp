#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;
    float *p = new float(70.76);
    cout << "The Value at address p is " << *(p) << endl;
    int *arr = new int[3];
    arr[0] = 17;
    arr[1] = 107;
    arr[2] = 170;
    // delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}
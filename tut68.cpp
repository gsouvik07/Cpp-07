#include <iostream>
using namespace std;

template <class T>
class Souvik
{
public:
T data;
    Souvik(T a)
    {
        data = a;
    }
    void display(){
        cout << data;
    }

    };
/*template <class T>
class Souvik
{
public:
T data;
    Souvik(T a)
    {
        data = a;
    }
    void display()
    
};
template <class T>
void Souvik <T> :: display(){
    cout<<data;
}*/



int main()
{
    Souvik<int> s(5);
    cout << s.data << endl;
    s.display();
    return 0;
}
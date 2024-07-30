#include<iostream>
using namespace std;

class Baseclass{
    public:
    int var_Base;
    void display(){
        cout<<"Displaying base class variable var_base: "<<var_Base<<endl;
    }
};
class DerivedClass: public Baseclass
{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying base classcvariable var_base: "<<var_Base<<endl;
    }
};
int main(){
    Baseclass * base_class_pointer;
    Baseclass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var_Base = 70;
    base_class_pointer->display();
    base_class_pointer->var_Base = 3600;
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_Base =9709;
    derived_class_pointer->var_derived = 78;
    derived_class_pointer->display();

    
    return 0;
}
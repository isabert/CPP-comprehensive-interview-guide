#include "eg2_class_introduction.hpp"
#include "eg2_class_introduction.cpp"
#include<iostream>
using namespace std;

void eg_6_2(){
    complex_number *a = new complex_number{1,2};
    complex_number b = {1,2};
    a->set_real(2);

    cout<<(*a==b)<<endl;

    complex_number c = {a};
    c.set_real(2);
    cout<<c.stringnify()<<endl;
    c+=*a;
    cout<<c.stringnify()<<endl;
    c+=b;
    cout<<c.stringnify()<<endl;

    complex_number *d = *a+b;
    cout<<d->stringnify()<<endl;

    //get class variable
    cout<<d->get_count()<<endl;
    cout<<b.get_count()<<endl;

    delete a;
    delete d;
}

//int main(){
//    eg_6_2();
//    return 0;
//}

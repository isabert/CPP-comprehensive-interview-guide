#include "eg2_polymorphism.cpp"
#include<iostream>
using namespace std;
void eg_7_2(){
//////////shape is an abstract class(has pure virtual function), it can not create any instance
//    shape s1 = {};
//    s1.print_info();
//    cout<<s1.get_area()<<endl;

    square sqr1 = {0,0,12};
    cout<<sqr1.get_area()<<endl;
    sqr1.print_info();
}

//int main(){
//    eg_7_2();
//    return 0;
//}
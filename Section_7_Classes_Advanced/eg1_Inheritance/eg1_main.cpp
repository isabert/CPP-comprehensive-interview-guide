#include "eg1_inheritance.cpp"
#include<iostream>
using namespace std;
void eg_7_1(){
    shape s1 = {};
    s1.print_center();

    square sqr1 = {0,0,12};
    cout<<sqr1.get_area()<<endl;
    sqr1.print_center();
    sqr1.print_square();
}

//int main(){
//    eg_7_1();
//    return 0;
//}
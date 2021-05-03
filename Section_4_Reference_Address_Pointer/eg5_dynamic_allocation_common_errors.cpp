#include<iostream>
using namespace std;

void eg_4_5(){
    ///Access Nullptr: try to do *ptr whe ptr==nullptr
    //It's undefined behavior, each processor will treat the case differently
    //DO NOT DO THIS:
    int *ptr = nullptr;
    cout<<*ptr<<endl;
    ///END OF Acceaa Nullptr

    ///Wild pointers: Uninitialized pointers
    double *wild;
    cout<<*wild<<endl;//wild pointer here, may have unwanted data that is not 0
    //remedy: set pointer as zero when initializing or after declaration
    //Option1:  double *wild = nullptr;
    //Option2:  double *wild; wild=nullptr;
    wild = nullptr;//wild pointer fixed
    ///END OF Wild pointer

    ///Dangling pointers: Remnants of a pointer after delete
    double *dangling = new double{4.12};
    //uses dangling
    delete dangling;
    cout<<*dangling<<endl;//dangling pointer here, still have 4.12 as value

    //remedy: set dangling to nullptr after delete
    dangling = nullptr;//dangling pointer fixed
    ///END OF Dangling pointer

    ///Memory Leak: when there isn't anyone that keeps track of the data
    ///Signification cases are:
    ///1. created an dynamic array in a function, didn't return it or pass it off
    ///2. assigned the same pointer to another variable before delete this part of the data (linked list head = head.next)
    ///ETC...
    //This is one of the most dangerous things a c++ programmer can do
    double *leak = new double{1.234};
    leak = nullptr;
    //remedy: delete leak before leak=nullptr
    ///END OF Memeory Leak
}

//int main(){
//    eg_4_5();
//    return 0;
//}
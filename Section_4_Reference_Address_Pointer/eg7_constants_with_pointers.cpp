#include<iostream>
using namespace std;

void eg_4_7_1(){
    int t = 47;
    int t2 = 48;
    //"const" value at pointer
    int const *c2 = &t;
    cout<<*c2<<endl;

    //allowed: change value at original variable
    t =12;
    cout<<*c2<<endl;

    //NOT allowed: change value at pointer
    //*c2 = 48;
    //cout<<*c2<<endl;

    //allowed: change value of address
    c2 = &t2;
    cout<<*c2<<endl;
}

void eg_4_7_2(){
    int t = 47;
    int t2 = 48;
    //const address at pointer
    int * const c2 = &t;
    cout<<*c2<<endl;

    //allowed: change value at original variable
    t =12;
    cout<<*c2<<endl;

    //allowed: change value at pointer
    *c2 = 48;
    cout<<*c2<<endl;

    //NOT allowed: change value of address
//    c2 = &t2;
//    cout<<*c2<<endl;
}

void eg_4_7_3(){
    int t = 47;
    int t2 = 48;
    //const address at pointer
    int const * const c2 = &t;
    cout<<*c2<<endl;

    //allowed: change value at original variable
    t =12;
    cout<<*c2<<endl;

    //NOT allowed: change value at pointer
//    *c2 = 48;
//    cout<<*c2<<endl;

    //NOT allowed: change value of address
//    c2 = &t2;
//    cout<<*c2<<endl;
}

//int main(){
//    eg_4_7_1();
//    eg_4_7_2();
//    eg_4_7_3();
//    return 0;
//}
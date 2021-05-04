#include<iostream>
#include<string>
using namespace std;

void eg_6_1(){
    // There is another way to define every variable in c++ using {}
    int a{6}; //equavalent of int a =6;
    double b{13.13};
    char c{65};
    string d{"Helloworld"};
    int e[4]{1,2,3,4};

    //After reading this, some dynamic allocations start to make sense
    int *p_a = new int {14};
    int *p_e = new int[4]{1,2,3,4};

    //Here are the dynamic allocations done in {} form
    int *f{new int {14}};
    int *g{new int[4]{1,2,3,4}};

    cout<<e[3]<<endl;
    cout<<*p_a<<endl;
    cout<<*f<<endl;
    cout<<g[0]<<endl;

}

//int main(){
//    eg_6_1();
//    return 0;
//}
#include<iostream>
using namespace std;

void eg_4_3(){
    /////* on the left hand side of the intialization means pointer
    //a pointer value refers to the address of a variable
    int a = 43;
    int* p_a = &a;

    cout<<a<<endl;
    //output 43

    cout<<&a<<endl;
    //output: address of a

    cout<<p_a<<endl;
    //output: address of a

    cout<<*p_a<<endl;
    //dereferecing
    //output: 43


    /////When initializing a pointer
    ///// it's good practice to assign the NULL or nullptr
    int *p_b = nullptr;

}

//int main(){
//    eg_4_3();
//    return 0;
//}
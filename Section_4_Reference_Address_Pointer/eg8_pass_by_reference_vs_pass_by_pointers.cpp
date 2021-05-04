#include<iostream>
using namespace std;

void pass_by_pointer(int *a){
    //variable a is in it's pointer form, so dereferencing has to be used.
    *a+=2;
}

void pass_by_reference(int &a){
    //variable a is in it's number form, i's just that this number is linked to the original address
    a-=2;
}

void eg_4_8(){
    // what is the difference between pass by reference and pass by pointers?
    // Pass by reference and pass by pointer are there to refer to an existing variable
    int a = 15;

    //when passing by pointer, you will have to give the program the address
    pass_by_pointer(&a);
    //now a==17;
    cout<<a<<endl;

    //when passing by reference, just give the program the variable
    pass_by_reference(a);
    //a==15 again
    cout<<a<<endl;
}

//int main(){
//    eg_4_8();
//    return 0;
//}

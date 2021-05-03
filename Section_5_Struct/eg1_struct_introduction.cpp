#include<iostream>
using namespace std;
//https://www.learncpp.com/cpp-tutorial/structs/
struct this_struct{
    //values are by default public
    int key;
    int value;
    int arr[1];
};

void eg_5_1(){
    /////method1: declare and then define
    struct this_struct a;
    a.key =1;
    a.value = 1;
    //can not assign a.arr = {4}, doesn't work
    a.arr[0] = 4;

    /////method2: initialize as "arrays"
    //DO NOT change the order .key, .value, .arr.
    struct this_struct b = {.key = 2, .value = 4, .arr={5}};
    //This also works
    //struct this_struct b = {2, 4, {5}};

    /////method3: initialize as objects(see section 6)
    //.key, .value, .arr will always be assigned in order
    struct this_struct c{3, 9, {6}};

    cout<<a.value<<endl;
    cout<<a.arr<<endl;
    cout<<sizeof(a.arr)/sizeof(a.arr[0])<<endl;

    cout<<b.value<<endl;
    cout<<a.arr<<endl;
    cout<<sizeof(a.arr)/sizeof(a.arr[0])<<endl;

    cout<<c.value<<endl;
    cout<<a.arr<<endl;
    cout<<sizeof(a.arr)/sizeof(a.arr[0])<<endl;
}

//int main(){
//    eg_5_1();
//    return 0;
//}
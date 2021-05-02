#include<iostream>
#include<assert.h>
using namespace std;

void eg_4_1(){
    int a = 14;
    int &b = a;
    //////////& at LEFT side of initialization means alias
    // this means a and b will be equal at all time
    // if a and b points to the same address

    b = 15;
    assert(b==a);
    cout<<a<<endl;

    cout<<&a<<endl;
    cout<<&b<<endl;
}

int main(){
    eg_4_1();
    return 0;
}
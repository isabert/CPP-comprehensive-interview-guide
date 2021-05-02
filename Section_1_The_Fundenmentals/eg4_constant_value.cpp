#include<iostream>
using namespace std;

int eg_1_4(){
    //to define a variable with constant VALUE:
    //type const identifier = value;

    //const can be assigned value
    int x;
    cin>>x;
    int const y = x;
    cout<<y<<endl;

    //but const can NOT change value
    //y = 20;

    //const can NOT be uninitialized
    //const int a;
}

//int main(){
//    eg_1_4();
//    return 0;
//}
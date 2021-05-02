#include<iostream>
using namespace std;
void eg_2_4_1(){
    int a = 2;
    int b = 4;

    //equivalent statements
    cout<<(a==2 and b==4)<<endl;
    cout<<(a==2 && b==4)<<endl;

    //equivalent statement
    cout<<(a>4 or b>4)<<endl;
    cout<<(a>4 or b>4)<<endl;

    //not
    cout<<!(a>4 or b>4)<<endl;

    //not equals
    cout<<(a!=4)<<endl;
}



int main(){
    eg_2_4_1();
    return 0;
}

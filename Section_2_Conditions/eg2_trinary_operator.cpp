#include<iostream>
#include<string>
using namespace std;

void eg2_2(){
    int x=3;
    string res = x==3?"Yes, x==3":"No, x!=3";

    //condition:A?B is the same as
    //if(condition==True){A} else{B}
    cout<<res;
}

//int main(){
//    eg2_2();
//    return 0;
//}
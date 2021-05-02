#include <bits/stdc++.h>
using namespace std;
void eg2_1(){
    int x = 3;

    if(x<4){
        cout<<x<<" is smaller than 4";
    }
    else if(x<6){
        //imples !(x<4) and x<6
        //with simplifies to 4<=x<6
        cout<<x<<" is smaller than 6";
    }
    else if(x<7){
        //imples !(x<4) and !(x<6) and x<7
        //with simplifies to 6<=x<7
        cout<<x<<" is smaller than 7";
    }
    else{
        //imples !(x<4) and !(x<6) and !(x<7)
        //with simplifies to x>=7
        cout<<x<<" is greater or equal to 7";
    }
}



//int main(){
//    eg2_1();
//    return 0;
//}
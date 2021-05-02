#include <bits/stdc++.h>
using namespace std;
void eg2_1(){
    int x = 3;

    if(x<4){
        cout<<x<<" is smaller than 4"<<endl;
    }
    else if(x<6){
        //imples !(x<4) and x<6
        //which simplifies to 4<=x<6
        cout<<x<<" is smaller than 6"<<endl;
    }
    else if(x<7){
        //imples !(x<4) and !(x<6) and x<7
        //which simplifies to 6<=x<7
        cout<<x<<" is smaller than 7"<<endl;
    }
    else{
        //simplifies to x>=7
        cout<<x<<" is greater or equal to 7"<<endl;
    }
    if(x!=4){
        cout<<"IS NOT 4"<<endl;
    }
}



//int main(){
//    eg2_1();
//    return 0;
//}
#include <iostream>
using namespace std;

void eg2_3_1(){
    int x = 7;
    int y = 0;
    switch ((x+y)%3){
        case 0:
            cout<<0<<endl;
            ///////////////////////////////// the break is very important here
            break;

        case 1:
            cout<<1<<endl;
            break;

        case 2:
            cout<<2<<endl;
            break;

        default:
            cout<<"There is an error"<<endl;
            break;
    }
}

int eg2_3_2(){
    int x = 7;
    int y = 0;
    switch ((x+y)%3){
        case 0:
            return 0;
            ///////////////////////////////// return is a substitute for break

        case 1:
            return 1;

        case 2:
            return 2;

        default:
            cout<<"There is an error"<<endl;
            return -1;
    }
}

//int main(){
//    eg2_3_1();
//    eg2_3_2();
//    return 0;
//}
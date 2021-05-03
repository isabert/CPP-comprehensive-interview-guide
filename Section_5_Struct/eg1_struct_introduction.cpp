#include<iostream>
using namespace std;

struct this_struct{
    //values are by default public
    int value;
    int key;
};


void eg_5_1(){
    struct this_struct a,b,c;
    a.key =1;
    a.value = 1;
    b.key = 2;
    b.value = 4;
    c.key =3;
    c.value = 9;

}

//int main(){
//    eg_5_1();
//    return 0;
//}
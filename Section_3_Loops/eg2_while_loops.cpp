#include<iostream>
using namespace std;

void eg_3_2_1(){
    int arr[5] = {1,2,3,4,5};
    int i = 0;
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    while(true){
        if(i==arr_size){
            break;
        }
        cout<<arr[i];
        i++;
    }
    cout<<endl;
}

void eg_3_2_2(){
    int i = 1;
    while(i<=11){
        cout<<i<< " \t";
        i++;
        if(i==10){
            continue;
        }

    }
}
//int main(){
//    eg_3_2_1();
//    eg_3_2_2();
//    return 0;
//}

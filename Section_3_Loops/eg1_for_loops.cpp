#include<iostream>
using namespace std;

void eg_3_1(){
    int arr[5] = {1,2,3,4,5};
    for (int i = 0; i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i];
    }

}
int main(){
    eg_3_1();
    return 0;
}

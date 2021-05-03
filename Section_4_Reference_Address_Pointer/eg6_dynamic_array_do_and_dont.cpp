#include<iostream>
using namespace std;

void eg_4_6(){
    /////DO declare array length with variable
    int arr_len = 15;
    int *arr = new int[arr_len];
    for(int i=0;i<arr_len;i++){
        if(i!=0) arr[i] = i+1 +arr[i-1];
        else arr[i] = i+1;
    }
    //Use this array...
    cout<<arr[3-1]<<endl;
    delete[] arr;
    arr = nullptr;
    /////END

    /// Do check if the index for the dynamic array is out of bound!!!!!!

    /////DON'T append element to the end of the array, it doesn't work
    //The best work around is to get a bigger array and move this array's data
}


//int main(){
//    eg_4_6();
//    return 0;
//}
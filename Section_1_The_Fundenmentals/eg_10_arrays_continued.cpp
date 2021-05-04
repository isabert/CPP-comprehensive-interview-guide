#include<iostream>
using namespace std;
void another_function(double *arr, int arr_length){
    /////array's are always pass by reference(of it's 0th element)
    /////It would be a good idea to pass an array as a pointer
    for(int i =0; i<arr_length;i++){
        cout<<arr[i]<<endl;
    }
}
void eg_1_10(){
    //initialize:
    int arr1[] = {12,23,34};//there are only 3 elements;
    int arr2[5] = {1,2,3};//it would be wise to assume arr2[3] and arr2[4] are uninialized

    //pass array to another function
    double arr3[] = {0.9,22.19,10};
    int arr3_length = 3;
    another_function(arr3,arr3_length);
}

//int main(){
//    eg_1_10();
//    return 0;
//}
//

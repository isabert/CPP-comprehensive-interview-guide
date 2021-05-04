#include<iostream>
using namespace std;

int* return_by_pointer_0(){
    int *a = new int {15};
    return a;
}

int* return_by_pointer_1(int *arr, int l_arr){
    //assume the array has l_arr>=1
    return &arr[0];
}

int& return_by_reference_1(int *arr, int l_arr){
    //assume the array has l_arr>=1
    return arr[0];
}
/// BAD return by reference, there would be a memory leak
//int& return_by_reference_bad(){
//    int *a = new int {15};
//    return a;
//}

void eg_4_9(){
    // if you had reviewed section 4 eg8, this should sound intiative.
    ///However, be careful to return out of range references or dangling pointers
    ///return by reference is NOT DESIRED/BAD in most cases, because there would be no way to keep track of the var
    ///In this example, we will cover a way that return by reference is used.
    //https://stackoverflow.com/questions/13718465/what-does-it-mean-to-return-a-reference

    //simple return by pointer
    int *a = return_by_pointer_0();
    cout<<*a<<endl;
    //output: 15

    //example with an array
    //please carefully look at the definition of the functions
    int arr[] = {1,2,3,4};
    return_by_reference_1(arr,4)=10;
    cout<<arr[0]<<endl;
    //output: 10

    int* ptr_0 = return_by_pointer_1(arr,4);
    cout<<*ptr_0<<endl;
    //output: 10
}

//int main(){
//    eg_4_9();
//    return 0;
//}
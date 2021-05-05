#include<algorithm>
#include<iostream>

void print_arr(int *arr){
    for(int i=0;i<5;i++) std::cout<<arr[i]<<" ";
    std::cout<<std::endl;

}

void eg_8_0(){

    ////////////////// The element range is always defined as [first,last)

    int arr[] = {5,4,3,2,1};
    //get the beginning and ending pointers
    /// we have to use begin(arr) instead of arr.begin() is because arr is not a class
    std::cout<<std::begin(arr)<<std::endl;
    std::cout<<std::end(arr)<<std::endl;

    //check if sorted
    std::cout<<std::is_sorted(std::begin(arr), std::end(arr))<<std::endl;

    //check if it's a heap
    std::cout<<std::is_heap(std::begin(arr), std::end(arr))<<std::endl;

    //sort
    std::sort(std::begin(arr), std::end(arr));

    //find first occurance, this will return a pointer
    int *first_occ = std::find(std::begin(arr), std::end(arr), 11);
    if (first_occ!=std::end(arr)){
        //////find distance between 2 pointers
        std::cout<<std::distance(arr, first_occ)<<std::endl;
    }
    else{
        std::cout<<"NOTFIND"<<std::endl;
    }


    //reverse
    std::reverse(std::begin(arr), std::end(arr));

    //sort: skip the 0th element
    std::sort(std::begin(arr)+1, std::end(arr));
    print_arr(arr);

    //sort: skip the last element
    std::sort(std::begin(arr), std::end(arr)-1);
    print_arr(arr);

    //reverse 1st(0 based) element to 3rd element
    //[begin, end), begin=1, end= 4
    std::reverse(std::begin(arr)+1, std::begin(arr)+4);
    print_arr(arr);

    ////// DYNAMIC Array
    int* arr_dy = new int[5] {5,4,3,2,1};
    //we already have pointer
    std::sort(arr_dy, arr_dy+5);
    print_arr(arr_dy);

}

//int main(){
//    eg_8_0();
//    return 0;
//}
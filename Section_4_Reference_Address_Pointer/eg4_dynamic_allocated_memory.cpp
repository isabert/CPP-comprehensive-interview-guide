#include<iostream>
using namespace std;

void eg_4_4(){
    //In eg3_pointers.cpp, we assigned a static variable's address to a pointer
    //In this section, we will assign dynamic memory address to a pointer
    //the section of the dynamic momery is called a heap

    /////THE CORRECT WAY TO ASSIGN A SINGLE INT/DOUBLE/CHAR
    int * p_a = new int{421};
    cout<<*p_a<<endl;
    //output: 421
    //after p_a is no longer needed(end of program or something else)
    //FIRST, release the memory
    //THEN, set the pointer to None
    //The order is very important, otherwise the memory is lost
    delete p_a;
    p_a = NULL;
    /////END SECTION

    /////THE CORRECT WAY TO ASSIGN AN ARRAY WITH AUTO INITIALIZATION OF ALL 0
    //This method Works just for 0, doesn't work for 1 or 2 or 3...
    int * p_arr1 = new int[42]{};
    cout<<*p_arr1<<endl;
    //output: 0, which is the value for p_arr1[0]!!!!

    //use delete[] will delete all the array's element
    //If you use delete, it would just delete p_arr1[0]
    delete[] p_arr1;
    p_arr1 = NULL;
    /////END SECTION

    /////THE CORRECT WAY TO ASSIGN UNINITIALIZED ARRAY
    //ONLY storage for array is provided, however, the current array contains meaningless data
    int * p_arr2 = new int[42];
    cout<<*p_arr2<<endl;
    //use delete[] will delete all the array's element
    delete[] p_arr2;
    p_arr2 = NULL;
    /////END SECTION
}

int main(){
    eg_4_4();
    return 0;
}
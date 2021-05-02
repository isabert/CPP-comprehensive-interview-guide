
void eg_1_9(){
    //arrays are ALWAYS passed by reference
    //the address of the reference of an array is it's 0th element
    /////////////////////////////!
    // Be very careful about OUT OF BOUND for arrays
    // arr[-1], arr[len(arr)] contains other useful data for this and other programs
    /////////////////////////////!
    //declaration:
    //type identifier[number of elements];
    int arr[10];

    //definition or initialization:
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]); i++){
        arr[i] = i;
    }

    //size of arr:
    int sz = sizeof(arr)/sizeof(arr[0]);

    //There is no way to append to an array
    //There is no way to assign the size of the array as a variable
}

//int main(){
//    eg_1_9();
//    return 0;
//}
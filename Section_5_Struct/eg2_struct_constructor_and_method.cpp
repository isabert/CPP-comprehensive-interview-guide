#include<iostream>
using namespace std;

struct rectangle{
    int w;
    int h;
    //constructor
    rectangle(int w, int h){
        //this is a pointer, -> is to dereference
        this->w = w;
        this->h = h;
    }
    int area(){
        return w*h;
    }
    //uses default destructor
};

void eg_5_2(){
    //using the constructor
    struct rectangle a = rectangle(3,4);
    cout<<a.area()<<endl;
}

//int main(){
//    eg_5_2();
//    return 0;
//}
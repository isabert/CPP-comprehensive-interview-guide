#include<iostream>
using namespace std;

struct rectangle{
    int w;
    int h;
    rectangle(int w, int h){
        //when the struct variable is the same as the given variable, always use this
        this->w = w;
        this->h =h;
    }
    int area(){
        return w*h;
    }
};

struct triangle{
    int b;
    int h;
    triangle(int base, int height){
        b = base;
        h = height;
    }
    double area(){
        return b*h/2.0;
    }
};

void eg_5_3(){
    //suppose we have a pointer to a object ptr
    //ptr->attrib is the SAME as *ptr.attrib

    //basically if you have an object, use . to access properties
    //if you have an pointer to an object, use -> to access properties

    //initialize static struct
    struct rectangle rec = {3,4};
    //initialize dynamic struct
    struct triangle* tri = new triangle{5,6};

    //pointer operation
    struct triangle triing = {6,7};
    struct triangle* tri_again = &triing;

    cout<<rec.area()<<endl;
    cout<<tri->area()<<endl;
    cout<<triing.area()<<endl;
    cout<<tri_again->area()<<endl;

    //releasing memory
    delete tri;
    tri=nullptr;
    tri_again=nullptr;
}

//int main(){
//    eg_5_3();
//    return 0;
//}
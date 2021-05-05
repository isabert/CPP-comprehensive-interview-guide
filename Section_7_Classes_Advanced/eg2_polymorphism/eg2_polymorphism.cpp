#include "eg2_polymorphism.hpp"
#include <iostream>

///////////virtual keyword can only appear in the .hpp file/ on first declaration

using namespace std;

shape::shape(double x, double y){
    this->x = x;
    this->y = y;
}

void shape::print_info() {
    cout<<"("<<x<<","<<y<<")"<<endl;
}

square::square(double x, double y,double l): shape::shape(x,y){
    this->l = l;
}
double square::get_area(){
    return l*l;
}

void square::print_info() {
    cout<<l<<endl;
}
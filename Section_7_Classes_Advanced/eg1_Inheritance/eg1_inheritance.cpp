#include "eg1_inheritance.hpp"
#include <iostream>
using namespace std;
//although x and y has default values, the defaults should only declared once
shape::shape(double x, double y){
    this->x = x;
    this->y = y;
}
void shape::set_center_x(double x){
    this->x =x;
}
double shape::get_center_x(){
    return this->x;
}
void shape::set_center_y(double y){
    this->y = y;
}
double shape::get_center_y(){
    return this->y;
}
void shape::print_center() {
    cout<<"("<<x<<","<<y<<")"<<endl;
}
//although x, y, l has default values, the defaults should only declared once
////to use the shape CONSTRUCTOR, use :
square::square(double x, double y,double l): shape::shape(x,y){
    this->l = l;
}
double square::get_area(){
    return l*l;
}

void square::set_l(double l){
    this->l = l;
}
double square::get_l(){
    return l;
}
////to use other methods from shape, call the method in current method!
void square::print_square() {
    shape::print_center();
    cout<<l<<endl;
}
#include "eg3_object_dynamic_allocation.hpp"
#include<iostream>
using namespace std;
vector_2d::vector_2d(){
    total_number++;
    this->x = new double {0};
    this->y = new double {0};
}
vector_2d::vector_2d(double x, double y){
    total_number++;
    this->x = new double {x};
    this->y = new double {y};
}
vector_2d::vector_2d(vector_2d *v){
    total_number++;
    this->x = new double {*(v->x)};
    this->y = new double {*(v->y)};
}
vector_2d::vector_2d(vector_2d &v) {
    total_number++;
    this->x = new double {*(v.x)};
    this->y = new double {*(v.y)};
}
/// operator override needs object to be PASS by REFERENCE
bool vector_2d::operator== (vector_2d const &v1) const{
    return bool(*x==*(v1.x) and *y==*(v1.y));
}
vector_2d::~vector_2d(){
    total_number--;
    delete x;
    delete y;
}
double vector_2d::get_x(){
    return *x;
}
void vector_2d::set_x(double x){
    *(this->x) = x;
}
double vector_2d::get_y(){
    return *y;
}
void vector_2d::set_y(double y){
    *(this->y) = y;
}
int vector_2d::total_number=0;
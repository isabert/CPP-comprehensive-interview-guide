#include "eg2_class_introduction.hpp"
#include <iostream>
using namespace std;
int complex_number::next_id = 0;
complex_number::complex_number(double real, double imaginary){
    next_id++;
    this->real = real;
    this->imaginary = imaginary;
}

complex_number::complex_number(complex_number *cn){
    next_id++;
    this->real = cn->real;
    this->imaginary = cn->imaginary;
}

complex_number::complex_number(complex_number &cn){
    next_id++;
    this->real = cn.real;
    this->imaginary = cn.imaginary;
}

complex_number::complex_number(){
    next_id++;
    this->real = 0;
    this->imaginary = 0;
}

double complex_number::get_real(){
    return real;
}
void complex_number::set_real(double real){
    this->real=real;
}

double complex_number::get_imaginary(){
    return imaginary;
}

void complex_number::set_imaginary(double imaginary){
    this->imaginary = imaginary;
}

string complex_number::stringnify(){
    string s = to_string(real)+"+"+to_string(imaginary)+"i";
    return s;
}

int complex_number::get_next_id() {
    return complex_number::next_id;
}

complex_number* complex_number::operator+= (complex_number const &cn){
    this->real+=cn.real;
    this->imaginary+=cn.imaginary;
    return this;
    ///if we are asked to return complex number, the return statement should be:
    //return *this;
}

bool complex_number::operator== (complex_number const &cn) const{
    return bool(real==cn.real and imaginary==cn.imaginary);
}

complex_number* complex_number::operator+ (complex_number const &cn) const{
    double new_real = real+cn.real;
    double new_imaginary = imaginary+cn.imaginary;

    complex_number *new_cn = new complex_number{new_real,new_imaginary};
    return new_cn;
}



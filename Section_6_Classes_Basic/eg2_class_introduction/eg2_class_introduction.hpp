#ifndef CPP_INTERVIEW_PREP_EG2_CLASS_INTRODUCTION_HPP
#define CPP_INTERVIEW_PREP_EG2_CLASS_INTRODUCTION_HPP

#include<string>
using namespace std;

class complex_number;

class complex_number{
public:
    //constructor
    complex_number(double real, double imaginary);
    complex_number(complex_number *cn);
    complex_number(complex_number &cn);
    complex_number();

//encapsulation: getter and setter member function
    double get_real();
    void set_real(double real);
    double get_imaginary();
    void set_imaginary(double imaginary);

    //other member functions
    string stringnify();

    //access class variable:
    int get_count();

    //sample operator overloading
    complex_number* operator+= (complex_number const &cn);
    bool operator== (complex_number const &cn) const;
    complex_number* operator+ (complex_number const &cn) const;

    //deconstructor: uses default deconstructor

protected:
    //class variable
    static int count;

private:
    //variables and functions are by default private.
    double real;
    double imaginary;

};

#endif //CPP_INTERVIEW_PREP_EG2_CLASS_INTRODUCTION_HPP

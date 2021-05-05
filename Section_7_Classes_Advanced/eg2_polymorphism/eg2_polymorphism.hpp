///virtual overwrites the parent classes function
///////////virtual keyword can only appear in the .hpp file/ on first declaration

//base class
///any class with a pure virtual function can not create instances
///this type of class is called an abstract class
class shape{
public:
    shape(double x=0, double y=0);
    virtual void print_info();
    //pure virtual function
    virtual double get_area()=0;
protected:
    double x;
    double y;

};
//derived class
class square: public shape{
public:
    square(double x=0, double y=0,double l=0);
    virtual double get_area();
    virtual void print_info();
protected:
    double l;
};
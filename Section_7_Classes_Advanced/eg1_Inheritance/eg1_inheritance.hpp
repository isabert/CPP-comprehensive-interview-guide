
///There are rules assciated with inheritance:
/// No derived class cannot remove the base class(or the class that it derives from)
/// classes can overwrite the base class/parent class's value
/// derived class can add properties/functions of their own

//base class
class shape{
public:
    //although x and y has default values, the defaults should not be specified in the .cpp file
    shape(double x=0, double y=0);
    void set_center_x(double x);
    double get_center_x();
    void set_center_y(double y);
    double get_center_y();
    void print_center();
protected:
    double x;
    double y;

};
//derived class
class square: public shape{
public:
    //although x, y and l has default values, the defaults should NOT be specified in the .cpp file
    //square also calls the constructor of shape, however, that is specified in the .cpp file
    square(double x=0, double y=0,double l=0);
    double get_area();
    void set_l(double l);
    double get_l();
    //print square uses the print_center from shapes, however, that is specified in the .cpp file
    void print_square();
protected:
    double l;
};


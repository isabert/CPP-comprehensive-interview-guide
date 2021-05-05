class vector_2d;

class vector_2d{
public:
    //constructor
    vector_2d();
    vector_2d(double x, double y);
    vector_2d(vector_2d* v);
    vector_2d(vector_2d &v);

    /// operator override needs object to be PASS by REFERENCE!!!
    bool operator==(vector_2d const &v1)const;
    //~destructor
    ~vector_2d();
    //encapsulation
    double get_x();
    void set_x(double x);
    double get_y();
    void set_y(double y);

protected:
    //class variable
    static int total_number;

    /// variable of the class instances
    /// We are defining them as protected.
    /// Protected can be accessed by decendents
    double *x;
    double *y;
};

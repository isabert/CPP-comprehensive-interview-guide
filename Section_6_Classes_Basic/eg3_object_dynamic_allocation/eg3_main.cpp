#include "eg3_object_dynamic_allocation.cpp"
#include<iostream>
using namespace std;

void eg_6_3(){
    //The main focus for this section is accessing class pointer's pointer values: *(classname->ptr)
    vector_2d *v1 = new vector_2d{1,2};
    vector_2d v2 = {1,2};
    vector_2d *v3 = new vector_2d{3,4};

    cout<<(*v1==v2)<<endl;
    cout<<(*v1==*v3)<<endl;

    v3->set_x(1);
    cout<<v3->get_x()<<endl;
    v3->set_y(2);
    cout<<v3->get_y()<<endl;

    cout<<(*v1==v2)<<endl;

    delete v1;
    delete v3;
}

//int main(){
//    eg_6_3();
//    return 0;
//}
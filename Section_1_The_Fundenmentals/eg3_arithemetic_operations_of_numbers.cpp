#include<iostream>
using namespace std;

void eg1_3(){
    ///////////////////missing brackets
    cout<<6/2*3<<endl;
    // output: 9

    //////////////////integer division
    cout<<"division using / round toward 0!!!"<<endl;

    cout<<2/3<<endl;
    //output: 0

    cout<<2/3*1.0<<endl;
    //output: 0

    cout<<-10/4<<endl;
    //output: 2

    /////////////////// mod
    cout<<3%2<<endl;
    //output: 1

    //////////upcasting: aka convert int to double
    cout<<"double/float will have automatically 6 decimal place"<<endl;

    cout<<2/3.0<<endl;
    //output 0.666667

    cout<<11 + (1/2)*3.0<<endl;
    //output: 11

    cout<<11.0 + (1/2)*3.0<<endl;
    //output: 11.0

    cout<<11.0 + 1/2*3.0<<endl;
    //output: 11.0

    cout<<11.0 + (1.0/2)*3.0<<endl;
    //output: 12.5
}

//int main(){
//    eg1_3();
//    return 0;
//}

#include <iostream>
using namespace std;

void eg_1_8_1(){
    //& is bitwise and `(&=)
    //| is bitwise or   (|=)
    //^ is bitwise xor  (^=)
    //~ is bitwise not  (~=)

    int a =79;
    //binary 0      1   0   0   1   1   1   1
    //       +'ve  64  32  16   8   4   2   1

    int MASK_64  = 1;
    MASK_64 <<=6;
    int MASK_32 =MASK_64>>1;

    //set extract 64-bit(print 0 or 64 depend if that bit is 1 or 0)
    cout<<(a&MASK_64)<<endl;
    //output: 64

    //set 32-bit to 1
    cout<<(a|MASK_32)<<endl;
    //output: 111

    //reverse 64 bit:
    cout<<(a^MASK_64)<<endl;
    //output: 15

    //set 64_bit from 1 to 0
    cout<<(a & ~MASK_64)<<endl;
    //output: 15
}

void eg_1_8_2(){
    //<<3 means left-shift 3 bits, if OVERFLOW didn't occur, means *8
    //>>3 means right-shift 3 bits, if UNDERFLOW didn't occur, means /8

    //<< and >> should not be used for negative numbers, use * or /
    int a = 15;

    cout<<(a>>3)<<endl;
    //output: 1

    cout<<(a<<3)<<endl;
    //output: 120

    cout<<((a>>3)<<3)<<endl;
    //output: 8
}

//int main(){
//    eg_1_8_1();
//    eg_1_8_2();
//    return 0;
//}
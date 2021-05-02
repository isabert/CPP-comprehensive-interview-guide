#include <iostream>
#include <assert.h>
using namespace std;

void eg_1_4_1(){
    ////////////////////1 byte = 8 bits
    //The size of short is AT LEAST 2 bytes(most common)
    assert(sizeof(short) >= 2);

    //The size of int should be larger than sizeof(short), usually 2 or 4 byte
    assert(sizeof(int) >= sizeof(short));

    //The size of long is AT LEAST 4 bytes, however, clion uses 8 byte long
    assert(sizeof(long) >= 4);

    //The size of long is AT LEAST 8 bytes
    assert(sizeof(long long) >= 8);
}

//int main(){
//    eg_1_4_1();
//    return 0;
//}

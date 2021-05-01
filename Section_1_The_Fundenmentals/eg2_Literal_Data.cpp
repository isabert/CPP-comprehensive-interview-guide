//
// Created by NECRONA on 2021-05-01.
//
#include<iostream>

int main(){
    std::cout<<"data type : int"<<std::endl;
    std::cout<<"ints are printed like they are entered! ";
    std::cout<<"But be careful, sometimes they would overflow!"<<std::endl;
    // ints are 2/4 bytes(16/32bits), they are signed
    int a = 12345678901;
    std::cout<<"printing 12345678901: "<< a<<std::endl;
    std::cout<<std::endl;

    std::cout<<"data type: long"<<std::endl;
    std::cout<<"they are at least 32 bits, but they can still overflow"<<std::endl;
    // longs are 4 bytes/32 bits, they are signed
    long b = 12345678901234567890;
    std::cout<<"printing 12345678901234567890: "<< b<<std::endl;
    std::cout<<std::endl;

    std::cout<<"data type: long long"<<std::endl;
    std::cout<<"long longs are at least 8 bytes/64 bits, but they can still overflow"<<std::endl;
    long long c = 12345678901234567890;
    std::cout<<"printing 12345678901234567890: "<< c <<std::endl;
    std::cout<<std::endl;

    std::cout<<"If you want unsigned number, try:"<<std::endl;
    std::cout<<"data type: unsigned int"<<std::endl;
    std::cout<<"data type: unsigned long"<<std::endl;
    std::cout<<"data type: unsigned long long"<<std::endl;
    unsigned int d = -15;
    unsigned long long e=-15;
    std::cout<<"if you put negative -15 for unsighed int,";
    std::cout<<d<<" is the result."<<std::endl;
    std::cout<<"if you put negative -15 for unsighed long long,";
    std::cout<<e<<" is the result."<<std::endl;
    std::cout<<std::endl;
    return 0;
}




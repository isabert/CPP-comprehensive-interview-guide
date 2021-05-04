#include<iostream>
#include<string>
using namespace std;

struct product{
    int len_p;
    double *price;
    //constructor
    product(int len_p, double* price){
        this->len_p = len_p;
        this->price = price;
    }
    //no destructor since there are no dynamically allocated memories
};

struct new_produce{
    int *len_p;
    double *price;
    new_produce(int len_p, double* price){
        this->len_p = new int {len_p};
        this->price = new double [len_p]{};

        for(int i=0;i<len_p;i++) this->price[i] = price[i];
    }
    ~new_produce(){
        delete len_p;
        delete[] price;
    }
};
void eg_5_5(){
    /////THIS SECTION'S PURPOSE IS CLARIFY "delete"
    double price[] = {1.98,1.90,0.99,0.66};
    struct product *p1 = new product{ 4,price};
    struct product p2 ={4,price};

    struct new_produce *np1 = new new_produce{4, price};
    struct new_produce np2 = {4,price};

    delete p1;
    delete np1;

    ///// why is does new_produce have a define destructor and produce doesn't?
    ///// Because there are dynamic allocations for new_produce and there isn't dynamic allocation for produce

    ///// why is there "delete" for p1 and np1?
    /////Because p1 and np1 are dynamically allocated and it's up to eg_5_5 to clean up the mess.
    ///// Sure, np2 is also has dynamically allocated parts in it, but eg_5_5 can call new_produce at the end to delete it.


    ///// What are the take aways?
    ///// In c++, everything clean up it's own mess.
    ///// In other words, new_produce is responsible for all the dynamic memory it used, and it cleans up after itself.
    /////!!!!!! Eg5_5 sees new_produce and produce as BLACKBOXES, what happens inside of the structs/classes is the struct/class's own business.
    ///// eg5_5 only sees the job to clean up p1 and np1 because those dynamic memory are ITS responsibility to clean up.

}

int main(){
    eg_5_5();
    return 0;
}
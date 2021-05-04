#include<iostream>
#include<string>
using namespace std;

struct product{
    string name;
    int id;
    int len_p;
    double *price;
    //constructor
    product(string name, int id, int len_p, double* price){
        //when passing an array as param, just take it as a ponter
        this->id = id;
        this->name = name;
        this->len_p = len_p;
        this->price = price;
    }
    double cheapest_option(){
        if(len_p==0){
            return -1;
        }
        double minimum = price[0];
        for(int i=0;i<len_p;i++){
            minimum = min(minimum,price[i]);
        }
        return minimum;
    }
    //no destructor since there are no dynamically allocated memories
};

struct new_produce{
    string *name;
    int *id;
    int *len_p;
    double *price;
    new_produce(string name, int id, int len_p, double* price){
        //when passing an array as param, just take it as a ponter
        this->id = new int {id};
        this->name = new string {name};
        this->len_p = new int {len_p};
        this->price = new double [len_p]{};

        for(int i=0;i<len_p;i++){
            this->price[i] = price[i];
        }
    }
    double cheapest_option(){
        if(len_p==0){
            return -1;
        }
        double minimum = price[0];
        for(int i=0;i<*len_p;i++){
            minimum = min(minimum,price[i]);
        }
        return minimum;
    }
    ~new_produce(){
        delete id;
        delete name;
        delete len_p;
        delete[] price;
    }
};
void eg_5_4(){
    double apple_price[] = {1.98,1.90,0.99,0.66};
    struct product *apple = new product{"apple", 1, 4,apple_price};

    struct new_produce *apple_new = new new_produce{"apple", 1,4, apple_price};

    cout<<apple->cheapest_option()<<endl;
    cout<<apple_new->cheapest_option()<<endl;

    delete apple;
    delete apple_new;
}

//int main(){
//    eg_5_4();
//    return 0;
//}
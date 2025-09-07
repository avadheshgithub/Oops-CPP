/*

    ## Recall pointer
        int x = 4;
        cout<<&x<<endl; //0983g3
        int* p = &x; 
        cout<<p<<endl; //2y3y41
        cout<<*p<<endl; //4

        *p = 100;
        cout<<x<<endl; //100


   ## Object Pointer

        here 



*/



#include<iostream>
using namespace std;


class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name,int runs,float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

};

void change(Cricketer* c){
    (*c).avg = 77.2; //c->avg = 77.2
}


int main(){
    Cricketer c1("virat kohli",25000,55.2);
    Cricketer c2("Rohit Sharma",18000,47.8);

    /*
        Cricketer* p1 = &c1;
        cout<<(*p1).runs<<endl; // 25000   or p1->runs
        (*p1).avg = 77.5; // p1->avg
        cout<<c1.avg;
    */


    
}
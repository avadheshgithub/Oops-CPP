/*
    # Static Allocation - stack memory, compile time
            int x = 6;
            cout<<x<<endl;
            int* ptr = &x;
            cout<<*ptr<<endl;



    ## Dynamic Allocation - without giving name, allocating address (Heap MEmory),at run time

            int* ptr = new int(4); // variable name is not but address assinged
            cout<<*ptr<<endl;


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


int main(){
    Cricketer c1("virat kohli",25000,55.2);
    Cricketer c2("Rohit Sharma",18000,47.8);

        /*
            Static Allocation - 
            int x = 6;
            cout<<x<<endl;
            int* ptr = &x;
            cout<<*ptr<<endl;
        */

    int* ptr = new int(4); // dynamic Allocation 
    cout<<*ptr<<endl;


    Cricketer* c3 = new Cricketer("Avadhesh",1900,57.0);
    cout<<c3->name<<" "<<c3->runs<<endl;

}
/*
    ## Run Time Polymorphism


        1. Function Overidding
            - parent & child both contain the same function with different Implementation .
            - the parent class function is said to ber overridden.

            - depedent on inheritance

        2. virtual Function
            - a virtual function is a member function that you expect to be redefined in derieved classed.
            - virtual function are dynamic in nature
            - defined by the keyword "Virtual" isdoe a base class and are always delcared witha base class and overidden in a child class
            - a virtual function is called during runtime
*/

#include<iostream>
using namespace std;


class Parent{
public:
    void show(){
        cout<<"Parent Class"<<endl;
    }

    virtual void hello(){ // Virtual Function
        cout<<"Hello from parent"<<endl;
    }
};

class Child:public Parent{
public:
    void show(){ // Function overidding
        cout<<"Child class"<<endl;
    }

    void hello(){ 
        cout<<"Hello from child"<<endl;
    }
};


int main(){
    Parent pt;
    pt.show(); // Parent class

    Child cd;
    cd.show();// child class

    pt.hello(); // Hello from Parent
    cd.hello(); // Hello from Child
    
}
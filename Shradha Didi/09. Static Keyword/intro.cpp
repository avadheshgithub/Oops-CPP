/*
    ## Static Keyword

        1. Static Variable

            -1.1 Varibales delcared as static in a function are created and intialised once for the lifetime of the program. // in Function

            -1.2 Static Variables in a class created & intialised once. they shared by all the bject of the class. // in Class

        2. Static Object
*/

#include<iostream>
using namespace std;

class A{
public:
    static int x; // static obj

    void increment(){
        x++;
        cout<<x<<endl;
    }
};

void sum(){
    int x=0;
    cout<<x<<endl;
    x++;

}
void fun(){
    static int x=0; // init Statement -  1 run
    cout<<x<<endl;
    x++;

}
int main(){
    sum();//0
    sum();//0
    sum();//0

    fun();//0
    fun();//1
    fun();//2

    // Static Obj
    A a;
    a.x = 0;
    a.increment(); //1

    A b;
    b.increment();//2

    A c;
    c.increment();//3
}
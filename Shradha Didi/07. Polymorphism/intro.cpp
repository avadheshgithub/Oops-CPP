/*
    ## polymorphism -

        - Polymorphism is the ability of objects to take on different form or behave in different
        ways depending on the contect in which they are used


    # Type

        - Complile Time Polymorphism - output we can decide at compile time

            -Overloading
                1. function Overloading - same function name,diff paramter,return type may diff
                2. constructor Overloading - multiple Constructor,diff parameter
                3. operator Overloading

        - Run time Polymorhism

            -Overidding
                1. methode Overiding
                2. Virtual Function
*/

#include<iostream>
using namespace std;

class Student{
public:
    string name;

    Student(){
        cout<<"Non - Parameterized Constructor"<<endl;
    }

    Student(string name){ // Constructor Overloading
        cout<<"i am Parameterized Constructor"<<endl;
        this->name = name;
    }

    void show(int x){
        cout<<x<<endl;
    }

    void show(char ch){ // Function Overloading
        cout<<ch<<endl;
    }
};

int main(){
    Student s1("Avadhesh");
    s1.show(3);

}

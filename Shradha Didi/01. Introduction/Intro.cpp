/*

    ## OBJEST ORIENTED PROGRAMMING - OOPS


        #Four Pillars

            1. Enscapsulation
            2. Inheritance
            3. Abstraction
            4. polymorphism

        - wrting code with help of classes and obj
        - Ex - vector,string,stack  ]--> used OOP to implement 


        1. object
            - objects are entitied in the real world
            - Ex car

        2. Class
            - Class is like a blueprint of these entities
            - user defined Data types
            - Ex Car


        ## property / attributes
        ## methods / member function

*/

#include<iostream>
using namespace std;

class Teacher{
public:
    // properties/attributes
    string name;
    string dept;

    string subject;
    double salary;

    // Methods / member function
    void changeDept(string newDept){
        dept = newDept;
    }

};

int main(){
    Teacher t1;
    t1.name = "Shradha";
    t1.subject = "C++";
    t1.dept = "CSE";
    t1.salary = 25000;

}

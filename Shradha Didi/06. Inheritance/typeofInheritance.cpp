/*

    ## Type of Inheritance

        1. SIngle Inheritance :   parent-->child 
        2. Multilevel Inheritace :  grandparent-->parent--->child
        3. multiple Inheritance :

                parent    parent
                    \     /
                    Child

        4. Hierachical Inheritance

                    parent
                    /    \
                child      child

        5. Hybrid Inheritance

                    Parent
                    /   \
                child   child
                          |
                       grandChild

*/

#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class Student:public Person{ // single Inheritance
public:
    int rollNo;
};

class GradStudent:public Student{ // Multilevel inheritance
    string researchArea;
};

class Teacher : public Person { // Hierachical Inheritance
public:
    string subject;
    double salary;
};

class TA : public Student,public Teacher{ // Multiple Inheritance

};

int main(){
    Student s1;
    s1.age=12;
    s1.name ="Avadhesh";
    s1.rollNo=04;

}
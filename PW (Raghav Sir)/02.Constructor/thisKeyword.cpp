/*
    ## this Keyword

        -> used to identify the diff between parameter variable name(constructor/function) and data members in class
*/

#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float gpa;
    string college;

    Student(string name,int rno,float gpa){ // Parameterized constructor
        this->name = name;
        this->rno = rno;
        this->gpa = gpa;

    }
};


int main(){
    Student s1("Avadhesh",04,8.1);
    Student s2("Amit",03,9.0);
}
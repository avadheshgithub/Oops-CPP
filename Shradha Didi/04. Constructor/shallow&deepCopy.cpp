/*
    Shallow Copy && Deep Copy

        1. Shallow copy - a shallow copy of an object copies all of the members values from one objects to another.
            - changed(pass by reference) (&)
            - by default by compiler

        2. Deep Copy - a deep copy, not only copies the member values but also makes copies of any dynamically allocated memory that the members point to;
            - created manually
            - best for dynamic Allocation

    */

#include<iostream>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name,double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj){ // shallow copy
        this->name=obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }

    Student(Student &obj){ // deep copy --> 
        this->name=obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"cgpa :"<<*cgpaPtr<<endl;
    }
};


int main(){
    Student s1("Avadhesh",8.1);

    Student s2(s1);
    *(s2.cgpaPtr) = 9.2; // changed CGPA for both s2 and s1
    s2.getInfo();


    Student s3(s2);
    *(s3.cgpaPtr)==9.9; // S2--> 9.2  && s1->9.9
    s3.getInfo();


}
/*
    ## Inheritance

        - when roperties & member function of base class are passed on to the derived class.
        - code reusability

        - while creating obj of child class called order-
            1.base class constructor --> 2.child class Constructor
            1.child class distructor --> 2. base class distructor


        ##Mode of Inheritance

                -           Derived class     Derived Class        derived class
            Base Class      private Mode      protected mode       public mode
        ---------------------------------------------------------------------------
            private         Not inherited     Not inherited        Not inherited
            protected       private           protected            protected
            public          private           protected            public
*/

#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(string name,int age){
        this->name=name;
        this->age = age;
    }

    Person(){

    }
};

class Student:public Person{
    // name,age,rollNo
public:
    int rollNo;

    Student(string name,int age,int rollno): Person(name,age){
        
    }

    Student(){};

    void getInfo(){
        cout<<"Name : " <<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"Rollno :"<<rollNo<<endl;
    }
};

int main(){
    Student s1;
    s1.age=12;
    s1.name ="Avadhesh";
    s1.rollNo=04;

    s1.getInfo();
}
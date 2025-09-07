/*
    ## This Keyword

        - this is special pointer in c++ that points to the current Obj

        - this->prop is same as *(this).prop
*/

#include<iostream>
using namespace std;

class Teacher{
public:
    string name;
    string dept;
    string subject;
    double salary;

    void changeDept(string newDept){
        dept = newDept;
    }

    // this
    Teacher(string name,string dept,string subject,double salary){ 
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

};

int main(){
    Teacher t1("Avadhesh","CSE","C++",1200);
}
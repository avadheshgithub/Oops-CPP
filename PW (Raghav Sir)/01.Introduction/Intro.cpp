/*

    Class - user Defined Data type

    ## Why -

        Array - same data type Elements
        class - multiple Data Type Elements

    ## Def -

        class - blueprint/
        Object - instance of class/real time entity

*/

#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float gpa;
    string colege = "EXC";
};


int main(){

 /*-------------------CLASS 1-------------------*/
    Student s; // object 1
    s.name = "Avadhesh";
    s.rno = 004;
    s.gpa = 8.5;

    Student s2; // Object 2
    s2.name="Amit";
    s2.rno = 02;
    s2.gpa = 9.0;

    // Printing the 
    cout<<s.name<<"-"<<s.rno<<endl;
    cout<<s2.name<<"-"<<s2.rno<<endl;


}
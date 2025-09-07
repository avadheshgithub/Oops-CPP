/*

    ## Constructor - 

        - a kind of function
        - same name as class name
        - no return type
        - used to intiliaze 


        Types -

        1. Defualt Contructor - by default
        2. parameterized Constructor
        3. copy Constructor

            1. Shallow copy - changes didn't
            2. Deep copy - if changes allowed (&-pass by reference)

        ## Multiple Constructor
            - can be multiple where (number of input diff,order diff)
*/

#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float gpa;
    string college;

    Student(string s,int r,float g){ // Parameterized constructor
        name = s;
        rno = r;
        gpa = g;
        college = "ABC";
    }

    Student(string s,int r,float g,string coll){ // multiple constructor
        name = s;
        rno = r;
        gpa = g;
        college = coll;
    }

    Student(Student& st){ // copy constructor
    
    }
    
    Student(){ // defualt Constrcutor

    }
};


int main(){
    Student s1("Avadhesh",04,8.1);
    Student s2("Amit",03,9.0,"abc");

    cout<<s1.gpa<<" "<<s1.name<<" "<<s1.rno<<endl;


    Student s3 = s1; // deep copy --> changes Allowed
    s3.name = "Vijay";
    cout<<s3.name<<endl;

    Student s4(s2); // deep copy --> changes Allowed
    s4.name = "manish";
    cout<<s3.name<<endl;

}
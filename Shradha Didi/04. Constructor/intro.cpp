/*
        ## Constructor

            - special methode invoked Automatically at time of object creation.
            - used for initialization
            - by default constructor by compiler
            - constructor always in public

        #Rules
            - same name as class;
            - constructor doesn't have a return type;
            - only called once (automatically),at object creation
            - memory allocation happed when constructor is called

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

    Teacher(){  // Non-parameterized Constructor
        dept = "CSE";
        cout<<"Hi, i am contructor"<<endl;
    }

};

int main(){
    Teacher t1; // Obj creation
    t1.name = "Shradha";
    t1.subject = "C++";
    t1.salary = 25000;

}

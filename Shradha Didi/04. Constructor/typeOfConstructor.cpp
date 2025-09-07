/*

    ## Type of Contructor

        1. Non-Parameterized Constructor;

        2. Parameterized constructor

        3. Copy constructor - special constructor used to copy properties of one objedt to another
                            - defualt by compiler (if not made)

            
            
            1. Shallow copy - a shallow copy of an object copies all of the members values from one objects to another.

            2. Deep Copy - a deep copy, not only copies the member values but also makes copies of any dynamically allocated memory that the members point to;
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

    Teacher(){ // Defualt Constructor

    }

    Teacher(){  // Non-parameterized Constructor
        dept = "CSE";
        cout<<"Hi, i am contructor"<<endl;
    }

    Teacher(string n,string d,string s,double sal){ // parameterized Constructor
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    Teacher(Teacher &orgObj){ // custom copy Constructor
        cout<<"I am custom copy Constructor"<<endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    void getInfo(){
        cout<<"Name : " <<name<<endl;
        cout<<"Subject : "<<subject<<endl;
    }

};

int main(){
    Teacher t1; // Obj creation
    t1.name = "Shradha";
    t1.subject = "C++";
    t1.salary = 25000;

    Teacher t2("Avadhesh","CSE","C++",1200);
    t2.getInfo();

    Teacher t3(t1); // copy constructor (shallow Copy)
    t3.getInfo();


}
/*

    ## Access Modifier

        1. Private  - Data & methods are Accessible inside class

        2. Public - data and methods accessible to Everyone

        3. Protected - data & methoda inside class & to its derived class



    ## Setter - 


    ## Getter -
*/

#include<iostream>
using namespace std;

class Teacher{
private:           // private
    double salary;

public:           //public
    string name;
    string dept;
    string subject;

    void changeDept(string newDept){
        dept = newDept;
    }

    //Setter
    void setSalary(double s){
        salary = s;
    }

    // Getter
    double getSalary(){
        return salary;
    }

};

int main(){
    Teacher t1;
    t1.name = "Shradha";
    t1.subject = "C++";
    t1.dept = "CSE";

    //t1.salary = 25000;  // can't Assing and Get

}
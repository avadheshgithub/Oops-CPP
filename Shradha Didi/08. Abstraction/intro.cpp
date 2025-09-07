/*
    ## Abstraction - 
        - hiding all unnecessary details & showing only the important parts

    ## Two Way to implement Abstraction

        1. Acsess Modefier
            - implemented by acess Modifier
            - private/public/protected

        2. Abstraction class
            - Abtract Keyword use
            - it is blueprint of other classes (only made for inheritance)
            - Abstract classed are used to provide a base class from which other classes can be derived.
            - they can not be instantiated and are meant to be inherited.
            - abstract classes are typcally used to define an interface for deriived classes.

        
*/

//-----------------------1. Using Access Modifier--------------------------------------

#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rollno;
private:
    int marks;
};

int main(){

}


//---------------------2. Using abstraction class-------------------------------


class Shape{ // abstract class
    virtual void draw()=0; // pure virtual function
};

class Circle:public Shape{
public:
    void draw(){
        cout<<"Drawing a circle"<<endl;
    }
};


int main(){
    Circle c1;
    c1.draw();
}

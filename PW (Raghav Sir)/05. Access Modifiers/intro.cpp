/*
    ## Access Modifier :


            1. Public
            2. Private
                    - can't set and get value from object
                    - can't change
            3.protected


    ## Acess Modifier

                  outside class        Derived class     within class
        public      YES                  YES               YES
        protected   NO                   YES               YES
        private     NO                    NO               YES     


    ## Getter and Setter

        - with the help of Getter --> get value
        - with the help of Setter --> set value

*/


#include<iostream>
using namespace std;


class Student{
public:
    int rno;
    string name;

    void display(){
        cout<<name<<" "<<rno<<endl;
    }

    Student(){

    }

    Student(int r,string n,float m){
        rno = r;
        name = n;
        marks = m;
    }

    int Getter(){
        return marks;
    }

    void Setter(float m){
        marks = m;
    }


private:
    float marks;

};

int main(){
    Student s1(59,"Avadhesh",89.0);

    Student s2;
    //s2->marks=12;  ERROR

    cout<<s1.Getter()<<endl;
    s1.Setter(122.3);

}


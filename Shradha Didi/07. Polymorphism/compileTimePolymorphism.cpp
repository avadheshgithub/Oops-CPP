/*
    ## COmpile Time Polymorphism

    - Complile Time Polymorphism - output we can decide at compile time

            -Overloading
                1. function Overloading - same function name,diff paramter,return type may diff
                2. constructor Overloading - multiple Constructor,diff parameter
                3. operator Overloading
 
*/

#include<iostream>
using namespace std;

class Student{
public:
    string name;

    Student(){
        cout<<"Non - Parameterized Constructor"<<endl;
    }

    Student(string name){ // Constructor Overloading
        cout<<"i am Parameterized Constructor"<<endl;
        this->name = name;
    }

    void show(int x){
        cout<<x<<endl;
    }

    void show(char ch){ // Function Overloading
        cout<<ch<<endl;
    }
};

int main(){
    Student s1("Avadhesh");
    s1.show(3);

}

/*-----------------------------Operator overloadingg--------------------

class Fraction{
public:
    int num;
    int den;

    Fraction(int num,int den){
        this->num = num;
        this->den = den;
    }

    void display(){
        cout<<num<<" / "<<den<<endl;
    }

    Fraction operator+(Fraction f){ // replace + with "add"
        int newNum = this->num*f.den + f.num*this->den;
        int newDen = this->den*f.den;
        Fraction ans(newNum,newDen);
        return ans;
    }

    Fraction operator-(Fraction f){ // replace + with "add"
        int newNum = this->num*f.den - f.num*this->den;
        int newDen = this->den*f.den;
        Fraction ans(newNum,newDen);
        return ans;
    }

    Fraction operator*(Fraction f){
        int newNum = this->num*f.num;
        int newDen = this->den*f.den;
        Fraction ans(newNum,newDen);
        return ans;
    }
};

int main(){
    Fraction f1(1,2);
    Fraction f2(1,3);

    f1.display();
    f2.display();

    //Fraction f3 = f1.add(f2);
    Fraction f3 = f1+f2; // same as add
    Fraction f4 = f1-f2; // diff
    Fraction f5 = f1*f2; // multi
}
*/
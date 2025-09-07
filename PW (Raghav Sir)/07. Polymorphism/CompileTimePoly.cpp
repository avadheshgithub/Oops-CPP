/*
    ## Compile Time polymorphism


        1. function Overloading - 
            - same function name && same return type but 
            - diff parameter,type diff,order diff

        2. Constructor Overloading - 
            -same contructor 
            -but different parameters,type diff, order diff

        3. operator overlaoding -
            - perform based on operand like int,string then diff operation

*/


//---------------------Cunstructor overloading-----------------------

#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float gpa;

    Student(){

    }

    Student(string s,int r){
        name = s;
        rno = r;
    }

    Student(int r,float g,string s){
        rno = r;
        gpa = g;
        name = s;
    }
};
int main(){

    Student s();
    Student s1("Avadhesh",12);
    Student s2(12,9.1,"Amit");
}




//---------------------Cunstructor overloading-----------------------

class Op{
public:

    void sum(int a,int b){
        cout<<a+b<<endl;
    }

    void sum(int a,int b,int c){
        cout<<a+b+c<<endl;
    }

    void sum(string a,string b){
        cout<<a+b<<endl;
    }
};

int main(){
    Op obj;
    obj.sum(1,2);
    obj.sum("Avadhes","Shah");
}



//---------------------Operator overloading-----------------------

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
/*
    ## FUnction inside class

        - called Data member

        by defualt --> pass by values
        & -----------> pass by reference;

*/


#include<iostream>
using namespace std;


class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name,int runs,float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    void print(int runs){
        cout<<runs<<endl; //1
        cout<<this->runs<<endl;//25000
    }

    int matched(){
        return runs/avg;
    }
};


int main(){
    Cricketer c1("virat kohli",25000,55.2);
    Cricketer c2("Rohit Sharma",18000,47.8);

    c1.print(1);
}
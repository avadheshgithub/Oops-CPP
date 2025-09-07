/*

    ## Run Time Polymorphism

        - methode Overidding --> virtual Keyword ==> it override override
    
*/

#include<iostream>
using namespace std;

class Scooty{ 
public:
    int topSpeed;
    float mileage;

    virtual void sound(){
        cout<<"Vroom Vroom"<<endl;
    }
};

class Bike:public Scooty{ 
public:
    int gears;

    void sound(){
        cout<<"Groom Groom"<<endl;
    }
};

int main(){
    /*
        Bike b;
        Scooty s;
        b.sound();
        s.sound();
    */

    Bike* b = new Bike(); // obj pointer
    b->sound();


    Scooty* s = new Bike(); // scoot ke print honge
    s->sound();
}
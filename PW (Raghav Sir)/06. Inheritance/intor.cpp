/*
    ## Inheritance

        - inheriting the features from their parents class to child class
        - private data members can't be inherited

*/

#include<iostream>
using namespace std;

class Scooty{ // parent class OR base class
public:
    int topSpeed;
    float mileage;
private:
    int bootSpace;
};

class Bike:public Scooty{ // child class OR base class
public:
    int gears;
};

int main(){
    Bike b1;
    b1.topSpeed = 180;
    b1.mileage = 12.5;
}
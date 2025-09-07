/*
    ## Type Of Inheritance

        1. Single Inheritance
            - single parent and one or more children

        2. Multilevel Inheritance
            - grandparent class and then parent class then child class

        3. Multiple Inheritance
            - child extracting features from multple parents [man -->father,brother,husband]

        4. Hybrid Inheritance
            - combination of 2 or more than 2




    ## Acess Modifier

                  outside class        Derived class     within class
        public      YES                  YES               YES
        protected   NO                   YES               YES
        private     NO                    NO               YES     


    ## 

*/

#include<iostream>
using namespace std;

class Vehicle{ 
public:
    int topSpeed;
    float mileage;
    string fuel;
};

class Car:public Vehicle{
public:
    bool sunRoof;
};

class Bike:public Vehicle{ 
public:
    int gears;
};

class Truck:public Vehicle,Car{ // multiple inheritancr
public:

};

int main(){
    Bike b1;
    b1.topSpeed = 180;
    b1.mileage = 12.5;
}
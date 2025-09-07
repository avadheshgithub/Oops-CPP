/*

    ##Passing object to a function

        -- pass by value

    &  --- pass by refference

*/

#include<iostream>
using namespace std;

class Car{
public:
    string name;
    int price;
    int seats;
    string type;
};


void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}

int main(){
   Car c1;
   c1.name = "Maruti Swift";
   c1.price = 7000000;
   c1.seats = 5;
   c1.type ="HatchBack";

   Car c2;
   c2.name = "Toyato Fortuner";
   c2.price = 36000000;
   c2.seats = 8;
   c2.type ="SUV";

    //    cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c2.type<<endl;
    //    cout<<c2.name<<" "<<c2.price<<" "<<c2.seats<<" "<<c2.type;

    print(c1);
    print(c2);
}
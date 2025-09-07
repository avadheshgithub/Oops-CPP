/*
    ## Diamond Problem :
        - The Diamond Problem occurs in C++ with multiple inheritance when a class inherits from two classes that both inherit from a common base class.
        
        - This can cause ambiguity about which base class members are inherited.

    ## Key Points:
        - Happens in multiple inheritance.
        - Both parent classes inherit from the same grandparent class.
        - The child class inherits from both parents, causing two copies of the grandparent’s members.
        - Leads to ambiguity and redundancy.

    ## How It Solved :
        - The diamond problem is solved using virtual inheritance in C++.
        - This ensures only one instance of the grandparent class is present in the inheritance hierarchy.

*/

#include <iostream>
using namespace std;

class A{
public:
    void show(){
        cout << "Class A" << endl;
    }
};

class B : public A{};
class C : public A{};
class D : public B, public C{};

/* Solution-
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};
*/

int main(){
    D obj;
    // obj.show(); // Error: Ambiguous!

    obj.B::show();
    obj.C::show(); 
    return 0;
}
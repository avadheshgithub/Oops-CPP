/*
    
    ## A friend function
        - in C++ is a function that is not a member of a class but is allowed to access the class’s private and protected members. 
        
        - You declare a friend function inside the class using the friend keyword.

    ## Key points:

        - It is defined outside the class, but has access to its private/protected data.
        - It is useful when you want to allow a non-member function to access private data of a class.
*/

#include <iostream>
using namespace std;

class Box {
private:
    int width;
public:
    Box() : width(0) {

    }

    void setWidth(int w) { 
        width = w;
    }

    friend void printWidth(Box b);// Declare friend function
};

void printWidth(Box b) {
    cout << "Width of box: " << b.width << endl;
}

int main() {
    Box box;
    box.setWidth(10);
    printWidth(box); // Accesses private member
    return 0;
}
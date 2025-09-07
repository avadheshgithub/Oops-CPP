/*

    ## Destructor
    
        - used to deallocate memory
        - be default by compiler (is not mannully created)
        - defualt destructor only work for static memory allocation
        -

        - to deallocate dynamic allcated memory, desctuctor needed to crweeat manually




*/

#include<iostream>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name,double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Destrcutor
    ~Student(){
        cout<<"i am destructor"<<endl;
        delete cgpaPtr; //  dynamically located memory free --> memory weak
    }

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"cgpa :"<<*cgpaPtr<<endl;
    }
};


int main(){
    Student s1("Avadhesh",8.1);
    s1.getInfo();
}

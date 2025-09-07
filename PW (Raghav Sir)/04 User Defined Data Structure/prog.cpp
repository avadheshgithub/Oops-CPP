/*
        ## USER DEFINED DATA STRUCTURE - VECTOR

*/

#include<iostream>
using namespace std;

class Vector{
public:
    int size;
    int capacity;
    int* arr;

    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int ele){
        if(size==capacity){
            capacity *=2;
            int* arr2 = new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i]=arr[i];
            }
            arr = arr2;
        }
        arr[size++]==ele;
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    int get(int idx){
        if(size==0){
            cout<<"Array is Empty";
            return -1;
        }
        if(idx>=size || idx<0) {
            cout<<"Invalid Index";
            return -1;
        }
        return arr[idx];
    }

    void remove(){
        if(size==0){
            cout<<"Array is Empty";
            return;
        }
        size--;
    }
};


int main(){
    Vector v;

    v.add(1);
    cout<<v.size<<" - "<<v.capacity<<endl;
    v.add(2);
    cout<<v.size<<" - "<<v.capacity<<endl;
    v.add(3);
    cout<<v.size<<" - "<<v.capacity<<endl;
    v.remove();
    cout<<v.size<<" - "<<v.capacity<<endl;
}
#include<iostream>
using namespace std;

class Shape{ // abstract class
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape{
    public:
    void draw(){
        cout<<"Drawing a circle..."<<endl;
    }
};

int main(){

    Circle c1;
    c1.draw();

    return 0;
}

/* We can't create object of Circle class it use only for give the idea (blueprint) for other classes */
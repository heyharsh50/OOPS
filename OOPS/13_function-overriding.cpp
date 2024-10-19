// Run time polymorphism - 1.Function overriding
//                         2.Virtual function

#include<iostream>
using namespace std;

class Parent{
    public:
        void getInfo(){
            cout<<"Parent class..."<<endl;
        }

        virtual void hello(){
            cout<<"Hey, I am parent class..."<<endl;
        }
};

class Child : public Parent{
    public:
        void getInfo(){
            cout<<"Child class..."<<endl;
        }

        void hello(){
            cout<<"Hey, I am child class..."<<endl;
        }
};

int main(){

    Parent p;
    Child c;

    p.getInfo(); // Output: Parent class...
    p.hello(); // Output: Hey, I am parent class...

    c.getInfo(); // Output: Child class...
    c.hello(); //Output: Hey, I am child class...

    return 0;
    
}
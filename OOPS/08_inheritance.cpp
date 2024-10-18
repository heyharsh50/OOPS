// Inheritance --> A class can receive attributes and methods from another class
//                 children classes inherit from parent class 
//                 Helps to reuse similar code found within multiple classes

// In inheritance first parent class constructor is call then child constructor is called.

#include<iostream>
using namespace std;

class Animal{
    public:
        bool alive = true;
            void eat(){
                cout<<"Eating..."<<endl;
                }
            void sleep(){
                cout<<"Sleeping..."<<endl;
            }
            //parent constructor
            Animal(){
                cout<<"Animal is created"<<endl;
            }

};

class Dog : public Animal{
    public:
            void bark(){
                cout<<"Barking..."<<endl;
                }
            void wagTail(){
                cout<<"Wagging tail..."<<endl;
            }
            //child constructor
            Dog(){
                cout<<"Dog is created"<<endl;
            }

};

class Cat : public Animal{
    public:
            void meow(){
                cout<<"Meowing..."<<endl;
            }
};

int main(){

    Dog dog;
    Cat cat;

    cout<<"Dog is alive?: "<<dog.alive<<endl;
    dog.eat();
    dog.sleep();

    dog.bark();
    dog.wagTail();

    cout<<endl<<"Cat is alive?: "<<cat.alive<<endl;
    cat.eat();
    cat.sleep();

    cat.meow();

    return 0;
}
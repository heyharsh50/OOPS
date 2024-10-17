// Objects --> A collection of attributes and methods (Objects are entities in the real world)
// Class --> A blueprint or template for creating objects (Classes are like a blueprint of these entities)

#include<iostream>
using namespace std;

class Human{
    public:
        string name;                        //attributes (Characteristics of an objects)
        string occupation;
        int age;

        void eat(){                         //methods | functions() (methods are fun() that an object can perform)
            cout<<"Eating..."<<endl;
        }
        void drink(){
            cout<<"Drinking..."<<endl;
        }
        void sleep(){
            cout<<"Sleeping..."<<endl;
        }

};


int main(){

    Human human1;                        //className followed by unique identifier
    
    human1.name = "Harsh";              //unique identifier(member access modifier --> '.')name
    human1.occupation = "Student";
    human1.age = 22;

    cout<<human1.name<<endl;
    cout<<human1.occupation<<endl;
    cout<<human1.age<<endl;

    //to invoke method 
    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;

}

// dot operator '.' --> if we want to access properties for an object
// By default attributes, member function and all are private in class.
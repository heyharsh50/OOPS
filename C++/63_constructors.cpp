// Constructors   -->   special method that is automatically called when an object is instantiated
//                      useful for assigning values to attributes as arguments

#include<iostream>
using namespace std;

class Teacher{
    public:
        string name;
        int age;
        string subject;
            Teacher(string name, int age, string subject){ // parameterized constructor

                this->name = name;
                this->age = age;
                this->subject = subject;
            }

};

int main(){

    Teacher T1("Harsh", 22, "C++"); //constructor call

    cout<<T1.name<<endl;
    cout<<T1.age<<endl;
    cout<<T1.subject<<endl;

    return 0;
}
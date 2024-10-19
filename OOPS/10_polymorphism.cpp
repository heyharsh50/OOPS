#include<iostream>
using namespace std;

class Student{
    public:
        string name;

        Student(){
            cout<<"Non-Parameterized constructor "<<endl;
        }
        Student(string name){
            this->name = name;
            cout<<"Parameterized constructor "<<endl;
        }
};

int main(){

    Student s1;                 //Non-Parameterized constructor
    Student s2("John");         //Parameterized constructor

    return 0;
}
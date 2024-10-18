#include<iostream>
using namespace std;

class Student{
    public:

    string name;
    double *gradePtr;

    Student(string name, double grade){
        this->name = name;
        gradePtr = new double;
        *gradePtr = grade;
    }

    //destructor
    ~Student(){
        cout<<"Hey, bro i delete everything :) "<<endl;
        delete gradePtr; //if not delete then it leads to memory leak
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Grade: " << *gradePtr << endl;
    }
};

int main(){

    Student s1("Harsh Raj", 8.9);
    s1.getInfo();

    return 0;
}
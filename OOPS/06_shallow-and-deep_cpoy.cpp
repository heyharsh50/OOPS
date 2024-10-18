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

    Student(Student &obj){
        this->name = obj.name;
        this->gradePtr = obj.gradePtr;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Grade: " << *gradePtr << endl;
    }
};

int main(){

    Student s1("Harsh Raj", 8.9);
    s1.getInfo();

    Student s2(s1);
    s2.name = "neha";
    *(s2.gradePtr) = 9.2;
    s2.getInfo();

    return 0;
}
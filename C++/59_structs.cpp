// struct --> A structure that group related variables under on name 
//            structs can contain many different data types (string, int, double, bool, etc.)
//            variables in a struct is known as 'members'
//            member can be access with '.' --> dot "Class Member Access Operator"

#include<iostream>
using namespace std;

struct Student {
    int roll_no;
    string name;
    float marks;
    bool enrolled = true;           // we can also assign here
    };

int main(){

    Student student1;
    student1.roll_no = 202100129;
    student1.name = "Harsh";
    student1.marks = 85.5;

    Student student2;
    student2.roll_no = 202100128;
    student2.name = "Yuvraj";
    student2.marks = 87.8;

    Student student3;
    student3.roll_no = 202100318;
    student3.name = "Saurabh";
    student3.marks = 84.8;

    cout<<student1.roll_no<<endl;
    cout<<student1.name<<endl;
    cout<<student1.marks<<endl;
    cout<<student1.enrolled<<endl;
    cout<<endl;

    cout<<student2.roll_no<<endl;
    cout<<student2.name<<endl;
    cout<<student2.marks<<endl;
    cout<<student2.enrolled<<endl;
    cout<<endl;

    cout<<student3.roll_no<<endl;
    cout<<student3.name<<endl;
    cout<<student3.marks<<endl;
    cout<<student3.enrolled<<endl;
    cout<<endl;


    return 0;
}
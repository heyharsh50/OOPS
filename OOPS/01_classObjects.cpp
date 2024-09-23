#include<iostream>
#include<string>
using namespace std;

/* IMP -> class is like a blueprint of these entities.
        objects are entities in the real world. */

class Teacher {
private:
    double salary;

public:
    //properties | attributes
    string name;
    string dept;
    string sub;

    //methods | member function
    void changeDept(string newDept){
        dept = newDept;
    }

    //setter
    void setSalary(double s){
        salary = s;
    }

    //getter
    double getSalary(){
        return salary;
    }
// we cannot access salary directly but indirectly through these public function(setter & getter) we can access.

}; // <-- this semicolon denotes that class ends.

/* Method is a fun() which is written inside the class.*/

int main(){
    Teacher t1;
    t1.name = "Harsh";
    t1.dept = "Computer Science & Enginnering";
    t1.sub = "Compiler Design";
    t1.setSalary(48000);

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.sub<<endl;
    cout<<t1.getSalary() <<endl;


    Teacher T2;
    Teacher T3;
    Teacher T4;
return 0;

}

/* 1.Teacher T1 <-- is object
   2.Dot operator(".") use to access properties for an object or method
   3.Access Modifiers -> private, public, protected
    3.1.By default it is private.
   4.Setter -> To set private value.
   5.Getter -> To get values of private values. */
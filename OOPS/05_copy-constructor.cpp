#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    string dept;
    string sub;

    //non-parameterized
    Teacher(){
       dept = "CSE";
    }

    //parameterized
    Teacher(string name, string dept, string sub, double salary){
        this->name = name;
        this->dept = dept;
        this->sub = sub;
        this->salary = salary;
    }

    //copy constructor
    Teacher(Teacher &obj){
        cout<<"Hey, I'm a custom copy constructor..."<<endl;
        this->name = obj.name;
        this->dept = obj.dept;
        this->sub = obj.sub;
        this->salary = obj.salary;
    }

    
    void changeDept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout<<endl<< "name : " << name << endl;
        cout<< "subject : " << sub  << endl;
        cout<<endl;
    }


};

int main(){
    Teacher t1("Harsh", "CSE", "Compiler Design", 48000);
    t1.getInfo();

    Teacher t2(t1);     // default copy constructor invoke
    t2.getInfo();

    Teacher t3(t2);
    t3.getInfo();

return 0;

}
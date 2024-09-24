/* Constructor --> Types -> 1.Non-Parametreized constructor
                            2.Parameterized constructor
                            3.Copy constructor */

// Use for initialisation of object.

class Teacher {
private:
    double salary;

public:
    //non-parameterized
    Teacher(){
        dept = "CSE";
    }

    //parameterized
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        sub = s;
        salary = sal;
    }

    string name;
    string dept;
    string sub;

    void changeDept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout << "name : " << name << endl;
        cout << "subject : " << sub  << endl;
    }


}; 

int main(){
    Teacher t1("Harsh", "CSE", "Compile Design", "48000"); // constructor call
    t1.getInfo();

    Teacher T2;
    Teacher T3;
    Teacher T4;
return 0;

}


/* In one class there can be multiple constructor but constructors parameter should be different */

//Eg.
    class Teacher{
        public:
            Teacher(){
                ....
                ....
            }

            Teacher(string n, string d, ....){
                ...........
                ...........
            }
    }
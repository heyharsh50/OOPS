// this pointer

//  The situations where ‘this’ pointer is used:
//1. When local variable’s name is same as member’s name
//2. To return reference to the calling object

/*class Teacher{
    public:
        string name;
        string dept;
        string sub;
        double salary;

            Teacher(string n, string d, string s, double sal){
                name = n;
                dept = d;
                sub = s;
                salary = sal;
            }

    // instead of upper we can also write like this

            Teacher(string name, string dept, string sub, double salary){
                this->name = name;
                this->dept = dept;
                this->sub = sub;
                this->salary = salary;
            }

};*/
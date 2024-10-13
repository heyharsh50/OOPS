// sizeof() --> determines the size in bytes of a:
//              variable, data type, class, objects, etc.

#include<iostream>
using namespace std;

int main(){

    /*double gpa = 8.9;
    string name = "xyz";
    bool hungry = true;
    char grade = 'F';
    char grades[] = {'A', 'B', 'C', 'D', 'F'}; 

    //cout<<sizeof(gpa)<<" bytes"<<endl;
    //cout<<sizeof(string)<<" bytes"<<endl;
    //cout<<sizeof(grade)<<" bytes"<<endl;
    //cout<<sizeof(bool)<<" bytes"<<endl;
    //cout<<sizeof(grades)<<" bytes"<<endl;

    //cout<<sizeof(grades) / sizeof(char)<<" elements"<<endl;*/

    string names[] = {"Harsh", "Yuvraj", "Saurabh"};

    int size = sizeof(names) / sizeof(string);

    cout<<sizeof(names)<<endl;
    cout<<sizeof(string)<<endl;

    cout<<size<<" elements"<<endl;
    
    return 0;
}
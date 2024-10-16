// Const Parameter --> parameter that is effectivelyr read-only
//                     code is more secure & convey intent
//                     useful for refrences and pointers

#include<iostream>
using namespace std;

void info(const string name, const int age){
    
    //name = "xxxxxxx";
    //cleaage = 0000000;

    cout<<name<<endl;
    cout<<age<<endl;
}

int main(){

    string name = "Harsh";
    int age = 22;

    info(name, age);

    return 0;
}
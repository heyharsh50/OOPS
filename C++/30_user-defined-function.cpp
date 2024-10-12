// function --> a block of reusable code
// if we want to declare our function after main then we have to mention the function first.
//because our code scan from top to bottom
//think as each function as house so, here main function is my house and hbd is neighbour's house
//you can't see what's goin on on neighbourshouse
//so, we need aware hbd() that in main() we use string name
//pass the value as arguments inside the praenthesis
//and also pass the parameters in hbd(like what's the datatype)

#include<iostream>
using namespace std;

//void hbd();                   //if u want main function first

void hbd(string name, int age){

    cout<<"Happy Birthday !!"<<endl;
    cout<<"Happy Birthday to you !!"<<name<<endl;
    cout<<"You are "<<age<<" years old"<<endl;
    
}

int main(){

    string name = " Harsh ";
    int age = 22;

    hbd(name, age);

    return 0;

}
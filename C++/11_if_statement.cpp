// if statements --> do somethiing if a condition is true.
//                   if not, then don't do it.

#include<iostream>
using namespace std;

int main(){

    int age;

    cout<<"Enter your age: ";
    cin>>age;

    if(age >= 18){

        cout<<"Welcome to the repo !! ";
    }
    else if(age < 0){

        cout<<"Bro you haven't been born yet !! ";
    }
    else if(age >= 100){

        cout<<"You are too old to enter this repo !! ";
    }
    else{

        cout<<"You are not old enough to enter !! ";
    }
    
    return 0;
}

/* it will run in order that's why if you enter your age 101
     it will not print line no.24 due to order it will print line no. 16 */
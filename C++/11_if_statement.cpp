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

// Program to show months if user enter 1 it will show jan and so on.

#include<iostream>
using namespace std;

int main(){

    int month;

    cout<<"Enter the month(1-12): ";
    cin>>month;

    if(month == 1){
        cout<<"It is January";
    }
    else if(month == 2){
        cout<<"It is Februrary"<<endl;
    }
    else if(month == 3){
        cout<<"It is March"<<endl;
    }
    else if(month == 4){
        cout<<"It is April"<<endl;
    }
    else if(month == 5){
        cout<<"It is May"<<endl;
    }
    else if(month == 6){
        cout<<"It is June"<<endl;
    }
    else if(month == 7){
        cout<<"It is July"<<endl;
    }
    else if(month == 8){
        cout<<"It is August"<<endl;
    }
    else if(month == 9){
        cout<<"It is September"<<endl;
    }
    else if(month == 10){
        cout<<"It is October"<<endl;
    }
    else if(month == 11){
        cout<<"It is November"<<endl;
    }
    else if(month == 12){
        cout<<"It is December"<<endl;
    }
    else{
        cout<<"Invalid (Please enter between 1-12)"<<endl;
    }

    return 0;
}
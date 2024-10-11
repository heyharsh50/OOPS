// Program to show student which character grade means what using switch case

#include<iostream>
using namespace std;

int main(){

    char grade;

    cout<<"Enter your grade: ";
    cin>>grade;

    switch(grade){

        case 'A':
            cout<<"Excellent Performance !! "<<endl;
            break;
        
        case 'B':
            cout<<"Very-Good !!"<<endl;
            break;
        
        case 'C':
            cout<<"Good !!"<<endl;
            break;
        
        case 'D':
            cout<<"Need improvement !!"<<endl;
            break;
        
        case 'E':
            cout<<"Need improvement Work hard !!"<<endl;
            break;
        
        case 'F':
            cout<<"Fail"<<endl;
            break;

        default:
            cout<<"Invalid Please enter grade (A-F)"<<endl;

    }

    return 0;

}
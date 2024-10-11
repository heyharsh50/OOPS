//Program to implement a simple calculator

#include<iostream>
using namespace std;

int main(){

    char op;

    double num1;
    double num2;
    double result;

    cout<<endl<<"************************ CALCULATOR ************************ "<<endl;

    cout<<endl<<"Enter either (+, -, *, /): ";
    cin>>op;

    cout<<"Enter the #num1: ";
    cin>>num1;

    cout<<"Enter the #num2: ";
    cin>>num2;

    switch(op){

        case '+':
            result=num1 + num2;
            cout<<"result: "<<result<<endl;
            break;

        case '-':
            result=num1 - num2;
            cout<<"result: "<<result<<endl;
            break;
        
        case '*':
            result=num1 * num2;
            cout<<"result: "<<result<<endl;
            break;

        case '/':
            result=num1 / num2;
            cout<<"result: "<<result<<endl;
            break;

        default:
            cout<<"Enter the valid operation (+, -, *, /)"<<endl;

    }

    cout<<endl<<"************************************************************ "<<endl;

    return 0;

}
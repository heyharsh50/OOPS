//Program to find odd and even using ternary operator

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter a number to find even or odd: ";
    cin>>num;

    num % 2 == 0 ? cout<<"Even !!"<<endl : cout<<"Odd !!"<<endl;

    return 0;

}
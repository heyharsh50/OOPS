// return --> return a value back to the spot
//              where you called the encompassing function

#include<iostream>
using namespace std;

string concatString(string str1, string str2){
    return str1 +" "+str2;
}

double add(double num1, double num2){
    return num1 + num2;
}

int main(){

    double addition = add(2, 3);

    cout<<"Sum is: "<<addition<<endl;

    string fullName = concatString("Harsh", "Raj");

    cout<<"Hey, "<<fullName<<endl;

    return 0;
}
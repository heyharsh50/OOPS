//Arithmetic Operators --> return the result of a specific
//                          arithmetic operation (+ - * /)

//Order of precedence --> 1.parenthesis
//                        2.multiplication & division
//                        3.addition & substraction

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;                         //Input --> 5 & for division --> 10
    int students = n;

    //students = students + 1;      another way to write in short
    //students+=1                   another option and preferable
    //students++;                   Output --> 6

    //students--;                   Output --> 4

    //students*=2;                  Output --> 10
    
    //students/=2;                  Output --> 5

    int remainder = students % 2;
    cout<<remainder<<endl;              //{modulus operator}

    cout<<students<<endl;

    int anotherStudents = 6 - 5 + 4 * 3 / 2;
    cout<<anotherStudents<<endl;                //Output --> 7

    //we can also force operator precedence by parenthesis i.e --> 6 - (5 + 4) * 3 / 2
    //                                              in this case output is -7.
}
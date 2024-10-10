// Program to calculate hypotenuse of right angle triangle.
// Formula c = sqrt(a^2 + b^2) use power fun()

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    double a, b, c;

    cout<<"Enter the size of a: ";
    cin>>a;

    cout<<"Enter the size of b: ";
    cin>>b;

    //a = pow(a, 2);
    //b = pow(b, 2);
    //c = sqrt(a + b);

    c = sqrt(pow(a, 2) + pow(b,2));

    cout<<"Size of c: "<<c<<endl;

}
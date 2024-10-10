#include<iostream>
using namespace std;

int main(){

    //The const keyword specifies that a variable's value is constant
    //tells the compiler to prevent anything form modifying it
    //(read-only)

    // calculate the circumference

    const double pi = 3.14159;             // for making pi constant we use const keyword.
    //pi = 4.12;                          // not change due to const
    double radius = 10;
    double circumference = 2 * pi * radius;

    cout<<circumference<<"cm"<<endl;

    const int lightSpeed = 299613413;
    const int height = 2324;

    cout<<lightSpeed<<endl<<height<<endl;

    

}
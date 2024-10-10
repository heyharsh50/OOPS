//Useful math related functions
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    //math functions()
    double x = 3;
    double y = 4;
    double z;

    // max & min function() {It will return maximum & minimum value.}
    z = max(x, y);      //Output --> 4
    z = min(x, y);      //Output --> 3

    // power function()
    z = pow(2, 4);      //Output --> 16

    // square root function()
    z = sqrt(9);       //Output --> 3

    // absolute function()
    z = abs(-49);     //Output --> 49

    // round function()
    z = round(49.9);  //Output --> 50

    // ceil function
    z = ceil(49.2);   //Output --> 50

    // floor function()
    z = floor(49.99); //Output --> 49

    cout<<z<<endl;

}

// For math function go to website --> https://www.cplusplus.com/refrence/cmath/
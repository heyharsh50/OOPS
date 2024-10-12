// Local variables --> declared inside a function or block {}
// Global variables --> declared outside of all functions
//use scope resolution for access global variable

#include<iostream>
using namespace std;

int myNum = 3;      //this is the global variable {P.S avoid global variable} bcz it pollutes global namespace & they are less secure

//these are local variables
void printNum(){

    int myNum = 2;
    cout<<"Printing num from outside the main fun(): "<<myNum<<endl;
}

int main(){

    int myNum = 1;

    printNum();

    cout<<"Printing num from main fun(): "<<::myNum<<endl;

}
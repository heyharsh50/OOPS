// ternary operator ?: = replacement to an if/else statement
// condition ? expression1 : expression2;

#include<iostream>
using namespace std;

//using ternary operator
int main(){

    double grade = 85;

    grade >= 75 ? cout<<"Pass !!"<<endl : cout<<"Fail !!"<<endl;

    return 0;

}


// using if else:
/*int main(){

    double grade = 85;

    if(grade >= 75){

        cout<<"Pass !!"<<endl;
    }
    else{

        cout<<"Fail !!"<<endl;
    }

    return 0;

}*/
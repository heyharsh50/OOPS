// function template --> describes what a function looks like.
//                       Can be used to generate as many overloaded function
//                       as needed, each using different data types


#include<iostream>
using namespace std;

template <typename T, typename U>
auto max(T x, U y){

    return (x > y) ? x : y;
}

int main(){

    cout << max(10, 20) << endl;

    return 0;
}
// function template --> describes what a function looks like.
//                       Can be used to generate as many overloaded function
//                       as needed, each using different data types


#include<iostream>
using namespace std;

template <typename T, typename U>    //T for one dataType and U for another dataType
auto max(T x, U y){                 //auto will take automatically dataTypes

    return (x > y) ? x : y;
}

int main(){

    cout << max(10, 20) << endl;

    return 0;
}
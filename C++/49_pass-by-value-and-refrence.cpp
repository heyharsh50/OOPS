/* Pass-by-reference: When a method is called,
        the method arguments reference the same variable in memory as the caller.
  Pass-by-value: When a method is called, 
        the caller passes a copy of the argument variables to the method resulting in two values in memory. */

// Swaping 2 variables

#include<iostream>
using namespace std;

void swap(string &name1, string &name2){        //address-of operator is must otherwise two copy's of same variable change {hi , hi becomes hi, hi}

    string temp;

    temp = name1;
    name1 = name2;
    name2 = temp;
}

int main(){

    string name1 = " Hello";
    string name2 = "Harsh ";

    swap(name1, name2);

    cout<<"name1: "<<name1<<endl;
    cout<<"name2: "<<name2<<endl;
    cout<<endl;
    cout<<name1 + name2<<endl;

    return 0;
}
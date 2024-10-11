// do while loop --> do some block of code first,
//                      THEN repeat again if condition is true

#include<iostream>
using namespace std;

int main(){

    int number;

    do{

        cout<<"Enter the Positive #: ";
        cin>>number;
    }while(number < 0);

    cout<<"The # is: "<<number<<endl;

    return 0;
}
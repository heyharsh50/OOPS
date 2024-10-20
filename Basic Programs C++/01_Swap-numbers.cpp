#include<iostream>
using namespace std;

int main(){

    int a, b, temp;

    cout<<endl<<"********************* SWAP NUMBERS *********************"<<endl;

    cout<<"Enter the First number: ";
    cin>>a;

    cout<<"Enter the Second number: ";
    cin>>b;

    temp = a;
    a = b;
    b = temp;

    cout<<"\nNumber swap successfully: "<<endl;

    cout<<"First number: "<<a<<endl;
    cout<<"Second number: "<<b<<endl;

    return 0;
}
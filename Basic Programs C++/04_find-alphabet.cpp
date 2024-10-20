#include<iostream>
using namespace std;

int main(){

    char ch;

    cout<<"Enter the character: ";
    cin>>ch;

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        cout<<ch<<" is alphabet."<<endl;
    }
    else{
        cout<<ch<<" is not a alphabet."<<endl;
    }

    return 0;
}
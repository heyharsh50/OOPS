// cout << (insertion operator)
// cin >> (extraction operator)

#include<iostream>
using namespace std;

int main(){

    string name;
    int age;

    /*cout<<"What's your name?: ";    //Once we enter hit for space it will stop reading input.
    cin>>name;*/

    cout<<"What's your full name?: ";
    getline(cin>>ws, name);                 // we'r using getline() function for full name
                                        // it will not stop reading when we hit enter for space.
                                        // if we need whiteSpace then we have to use getline(cin, name);

    cout<<"What's your age?: ";
    cin>>age;

    cout<<endl;

    cout<<"Hello "<<name<<" !"<<endl;
    cout<<"You are "<<age<<" years old."<<endl;

}
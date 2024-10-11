// Scenario where we want to forcefully do things

#include<iostream>
using namespace std;

//it will keep on going untill you enter your name
int main(){

    string name;

    while(name.empty()){

        cout<<"Enter your name: ";
        getline(cin, name);
    }
    cout<<"Hey, "<<name<<" !"<<endl;

}

//in this case if user enter it will get out from loop and print only --> Hey, !!
/*int main(){

    string name;

    if(name.empty()){

        cout<<"Enter your name: ";
        getline(cin, name);
    }
    cout<<"Hey, "<<name<<" !"<<endl;

}*/
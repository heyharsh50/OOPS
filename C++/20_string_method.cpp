#include<iostream>
using namespace std;

int main(){

    string name;

    cout<<"Enter your name: ";
    getline(cin, name);

    //cout<<name.length()<<endl;        Output --> 5 (harsh)
    //cout<<name.empty()<<endl;         Output --> if empty it will show else 0
    //name.clear();                     Output --> Hello (name will be clear by using this)
    //name.append("@gmail.com");
    //cout<<"Your username is now "<<name<<endl;
    //cout<<name.at(0);                 Output --> H
    //name.insert(0, "@");              Output --> @Harsh raj
    //name.find(' ');                   Output --> for finding whiteSpace position
    //name.erase(0, 4);                 Output --> it will erase harsh & only display raj
    
    if(name.empty()){

        cout<<"You didn't enter your name !!"<<endl;
    }
    else{

        cout<<"Hey "<<name<<" !!"<<endl;
    }

    return 0;

}


// find the length of the string
/*int main(){

    string name;

    cout<<"Enter your name: ";
    getline(cin, name);

    //cout<<name.length()<<endl;        Output --> 5 (harsh)

    if(name.length() > 12){

        cout<<"Your name can't be over 12 character long !!"<<endl;
    }
    else{

        cout<<"Welcome "<<name<<" !!"<<endl;
    }

    return 0;

}*/
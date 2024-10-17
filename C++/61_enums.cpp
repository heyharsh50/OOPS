// enums --> a user-defined data type that consists
//           of paired named-integer constants.

#include<iostream>
using namespace std;

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main(){

    Day today = sunday;

    switch(today){
        case sunday: 
            cout<<"It is sunday !"<<endl;
            break;

        case monday: 
            cout<<"It is monday"<<endl;
            break;
        
        case tuesday: 
            cout<<"It is tuesday"<<endl;
            break;
        
        case wednesday: 
            cout<<"It is wednesday"<<endl;
            break;
        
        case thursday: 
            cout<<"It is thursday"<<endl;
            break;

        case friday: 
            cout<<"It is friday"<<endl;
            break;
        
        case saturday: 
            cout<<"It is saturday"<<endl;
            break;
    }

    return 0;
}
// switch --> alternative to using many "else if" statements
//            compare one value against many matching cases

// Program to show months if user enter 1 it will show jan and so on.
// previously using else if it looks confusing let's make with switch

#include<iostream>
using namespace std;

int main(){

    int month;

    cout<<"Enter the month(1-12): ";
    cin>>month;

    switch(month){

        case 1:
            cout<<"It's January"<<endl;
            break;
        
        case 2:
            cout<<"It's February"<<endl;
            break;
        
        case 3:
            cout<<"It's March"<<endl;
            break;
        
        case 4:
            cout<<"It's April"<<endl;
            break;

        case 5:
            cout<<"It's May"<<endl;
            break;
        
        case 6:
            cout<<"It's June"<<endl;
            break;

        case 7:
            cout<<"It's July"<<endl;
            break;
        
        case 8:
            cout<<"It's August"<<endl;
            break;
        
        case 9:
            cout<<"It's September"<<endl;
            break;
        
        case 10:
            cout<<"It's October"<<endl;
            break;

        case 11:
            cout<<"It's November"<<endl;
            break;
        
        case 12:
            cout<<"It's December"<<endl;
            break;

        default:
            cout<<"Invalid (Please enter the month between 1-12)"<<endl;
    }

    return 0;
}
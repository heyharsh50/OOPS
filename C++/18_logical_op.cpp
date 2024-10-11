// && --> check if two conditions are true
// || --> check if atleast one of two conditions is true
// !  --> reverses the logical state of its operand

//Program to check wheather the temperature is good or bad

#include<iostream>
using namespace std;

// using &&
int main(){

    bool sunny = false;

    double temp;    //In celcius

    cout<<"Enter the temperature: ";
    cin>>temp;

    if(temp <= 0 || temp >= 30){

        cout<<"The temperature is bad !!"<<endl;
    }
    else{

        cout<<"The temperature is good !!"<<endl;
    }

    if(!sunny){

        cout<<"It's cloudy outside !"<<endl;
    }
    else{
        cout<<"It's sunny outside !"<<endl;
    }

    return 0;

}

// using &&
/*int main(){

    double temp;    //In celcius

    cout<<"Enter the temperature: ";
    cin>>temp;

    if(temp > 0 && temp < 30){

        cout<<"The temperature is good !!"<<endl;
    }
    else{

        cout<<"The temperature is bad !!"<<endl;
    }

    return 0;

}*/
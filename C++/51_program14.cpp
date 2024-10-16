// Program in c++ for credit card validator

#include<iostream>
using namespace std;

int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}

int sumEvenDigit(const string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0')*2);
    }
    return sum;
}

int sumOddDigit(const string cardNumber){

    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += getDigit(cardNumber[i] - '0');
    }
    return sum;
}

int main(){

    string cardNumber;
    int result = 0;

    cout<<"Enter a Credit Card #: ";
    cin>>cardNumber;

    result = sumEvenDigit(cardNumber) + sumOddDigit(cardNumber);

    if(result % 10 == 0){
        cout<<cardNumber<<" is valid"<<endl;
    }
    else{
        cout<<cardNumber<<" is not valid !!"<<endl;
    }

    return 0;
}
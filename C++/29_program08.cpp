// Program for number guessing game usng do-while, if-else & rand()

#include<iostream>
#include<ctime>
using namespace std;

int main(){

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout<<endl<<"****************** NUMBER GUESSING GAME ******************"<<endl;
    cout<<endl;

    do{

        cout<<"Enter a guess between (1-100): ";
        cin>>guess;
        tries++;

        if(guess > num){

            cout<<"To high !! "<<endl;
        }
        else if(guess < num){

            cout<<"To low !! "<<endl;
        }
        else{

            cout<<endl<<"correct !! # of tries: "<<tries<<endl;
        }

    }while(guess != num);

    cout<<endl<<"*****************************************************************"<<endl;

    return 0;

}
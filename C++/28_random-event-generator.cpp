// Program for prize distribution randomly using random() & switch case

#include<iostream>
#include<ctime>
using namespace std;

int main(){

    srand(time(NULL));

    int randomNum = (rand() % 5) + 1;       // 1-5 and + 1 it will give 0 (rand() % 5)

    switch(randomNum){

        case 1:
            cout<<"Bro, You win a car :) "<<endl;
            break;
        case 2:
            cout<<"Brooo, You win a Trip to mars :0 "<<endl;
            break;
        
        case 3:
            cout<<"Bro, You win a apple (not iphone one) :( "<<endl;
            break;

        case 4:
            cout<<"Bro, You win a 1000$ !! "<<endl;
            break;

        case 5:
            cout<<"Bro, You win a House !!!! "<<endl;
            break;

        default:
            cout<<"Jb zindagi mai lage ho l*** to apko kuch nhi mil skta sirf L milega"<<endl;
    }

}
// nested loop --> loop inside a loop

    /* loop(){

            loop(){
            
            
            }    
    
    } */

#include<iostream>
using namespace std;

int main(){

    for(int i = 1; i <= 5; i++){

        for(int j = 1; j<=10; j++){

            cout<< j << " ";
        }
        cout<<endl;
    }

}
// Recursion --> a programming technique where a function 
//               invokes itself from within
//               break a complex concept into a repeatable single step  

                            /* void doSomething(){

                                doSomething();

                            }*/

// (iterative v/s recursive)

//advantages --> less code and is cleaner
//               useful for sorting and searching algorithms

//disadvantage --> uses more memory 
//                 slower

#include<iostream>
using namespace std;

// This is an iterative approach
/*void walk(int steps){
        for(int i = 0; i<steps; i++){
            cout<<"You take a step !! "<<endl;
        }
}*/

// This is an recursive approach
void walk(int steps){
    if(steps > 0){
        cout<<"You take a step !! "<<endl;
        walk(steps -1);
    }
}

int main(){

    walk(100);

    return 0;
}
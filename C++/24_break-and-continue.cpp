// break --> break out of a loop
// continue --> skip current iteration

#include<iostream>
using namespace std;

int main(){

    for(int i = 1; i <= 20; i++){

        if(i == 13){
            continue;          // print 1 -20 but 13 will skip
           // break;          // print 1 - 12
        }

        cout<<i<<endl;
    }

    return 0;
}
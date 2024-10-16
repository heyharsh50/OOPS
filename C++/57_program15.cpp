// Program in c++ for factorial using recursion

#include<iostream>
using namespace std;

// iterative approach
/*int factorial(int num){
    int result = 1;
    for (int i = 1; i <= num; i++){
        result *= i;
    }
    return result;
}*/

// recursive approach
int factorial(int num){
    if(num > 1){
        return num * factorial(num -1);
    }
    else{
        return 1;
    }
}


int main(){

    cout<<factorial(10);

    return 0;
}
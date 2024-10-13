#include<iostream>
using namespace std;

double getTotal(double price[], int size){

    double total = 0;
    
    for(int i = 0; i < size; i++){

        total = total + price[i];
        
    }
    return total;
}

int main(){

    double price[] = {50, 65.50, 100, 120.40, 30.60};
    int size = sizeof(price) / sizeof(double);
    double total = getTotal(price, size);


    cout<<"Rs "<<total<<endl;


    return 0;
}
// Write a Program make food array divide into 3 half with {"Pizza", "Hamburger", "Coke"}
// use fill function and display each food item in each half 

#include<iostream>
using namespace std;

int main(){

    string foods[99];
    const int SIZE = 99;

    fill(foods, foods + (SIZE/3), "Pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "Hamburger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "Coke");

    for(string food : foods){

        cout<<food<<endl;
    }

    return 0;
}
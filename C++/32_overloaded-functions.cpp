/* Function overloading is a feature of object-oriented programming
     where two or more functions can have the same name but different parameters. */

/* int add(int a){

    return a;

}

int add(int a, int b){

    return a + b;

}

int add(int a, int b, int c){

    return a + b + c;

} 

int add(int a, int b, int c, int d){

    return a + b + C + d;

}*/

#include<iostream>
using namespace std;

void bakePizza(){
    cout<<"Here is your pizza !! "<<endl;
}

void bakePizza(string topping1){
    cout<<"Here is your "<<topping1<<" pizza !! "<<endl;
}

void bakePizza(string topping1, string topping2){
    cout<<"Here is your "<<topping1<<" and "<<topping2<<" pizza !! "<<endl;
}

int main(){

    bakePizza("pepperoni", "mushroom");

    return 0;

}
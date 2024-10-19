// compile time polymorphism - 1. function overloading
//                             2. operator overloading

#include<iostream>
using namespace std;

class Print{
    public:
        void show(int x){
            cout<<"int: "<<x<<endl;
        }
        void show(char ch){
            cout<<"char: "<<ch<<endl;
        }
};

int main(){

    Print p1;
    p1.show(10);        //int

    Print p2;
    p2.show('h');       //char

    return 0;
}
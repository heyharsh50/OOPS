#include<iostream>
using namespace std;

int main(){

    string name[] = {"Harsh", "Yuvraj", "Saurabh", "Samar", "Neta"};

    int size = sizeof(name) / sizeof(string);           // by this we not need to touch for loop

    for(int i = 0; i < size; i++){

        cout<<"Hey, "<<name[i]<<" !!"<<endl;
    }

    return 0;
}
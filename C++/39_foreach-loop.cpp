// foreach loop --> loop that eases the traversal over an
//                  iterable data set

#include<iostream>
using namespace std;

int main(){

    string name[] = {"Harsh", "Yuvraj", "Saurabh", "Samar", "Neta"};

    for(string names : name){       //for every names in name

        cout<<"Have a nice day "<<names<<" !!"<<endl;
    }

    int grade[] = {95, 96, 94, 99, 80};

    for(int marks : grade){
        
        cout<<"You score "<<marks<<" !!"<<endl;
    }

    return 0;
}
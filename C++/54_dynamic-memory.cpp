// Dynamic memory --> memory that is allocated after the program 
//                    is already compiled & running.
//                    Use the new operator to allocate 
//                    memory in the heap rather than the stack

//                    Useful when we don't know how much mmory
//                    we will need. Makes our programs more flexible,
//                    especially when accepting user input.

#include<iostream>
using namespace std;

int main(){

    int *pNum = NULL;

    pNum = new int;

    *pNum = 123;

    cout<<"Address: "<< pNum << endl;
    cout<<"Value: "<< *pNum << endl;

    delete pNum;
    

    return 0;
}
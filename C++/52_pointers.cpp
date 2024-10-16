// Pointer --> Variables that stores a memory address of another variable
//              Sometimes it's easier to work with an address

// & address-of operator
// * dereference operator

/* int var = 10;
int * ptr;
ptr = &var; */

#include<iostream>
using namespace std;

int main(){

    string name = "Harsh";

    string *pName = &name;      // datatype * ptr; (same dataType i.e (line no. 12))

    cout<< *pName <<endl;       // *pName will print & pName will print address

    int num = 50;

    int *pNum = &num;

    cout<< *pNum <<endl;

    int numbers[] = {49, 30, 40, 50};

    int *pNumbers = numbers;

    cout<< *pNumbers <<endl;

    return 0;
}
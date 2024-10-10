//Namespace --> Provides a solution for preventing name conflicts
//              in large projects. Each entity needs a unique name.
//              A namespace allows for identically named entities
//              as long as the namespace are different.

#include<iostream>

namespace first{

    int x = 1;
}

namespace second{

    int x = 2;
}

int main(){

    int x = 0;
    //int x = 1;  // Error due to redeclaration of x because it previously declared.

    std::cout << x << "\n" ;        // Output --> 0

    std::cout << first::x << "\n";  // Output --> 1

    std::cout << second::x << "\n";  // Output --> 2

}

// C++ program to show that we can access a global variable
// using scope resolution operator :: when there is a local 
// variable with same name 
#include<iostream> 
using namespace std;

int x; // Global x

int main()
{
int x = 10; // Local x
cout << "Value of global x is " << ::x;
cout << "\nValue of local x is " << x; 
return 0;
}
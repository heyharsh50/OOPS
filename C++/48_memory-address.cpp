// Memory address --> a location in memory where data is stored
// a memory address can accessed with & (address-of operator)

#include<iostream>
using namespace std;

int main(){

    string name = "Harsh";
    int age = 22;
    bool student = true;

    cout<<addressof(name)<<endl;
    cout<<addressof(age)<<endl;
    cout<<addressof(student)<<endl;

    cout<< &name << endl;


}


//hexa to decimal
/* #include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Function to convert hexadecimal to decimal
int hexToDecimal(string hex) {
    int len = hex.length();
    int base = 1;  // Initially, the base is 16^0
    int decimalValue = 0;

    // Loop through each character of the hexadecimal number
    for (int i = len - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimalValue += (hex[i] - '0') * base;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimalValue += (hex[i] - 'A' + 10) * base;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimalValue += (hex[i] - 'a' + 10) * base;
        }

        base *= 16;  // Increment the base (16^1, 16^2, ...)
    }
    return decimalValue;
}

int main() {
    string hex;
    cout << "Enter a hexadecimal number: ";
    cin >> hex;

    int decimalValue = hexToDecimal(hex);
    cout << "The decimal value is: " << decimalValue << endl;

    return 0;
} */
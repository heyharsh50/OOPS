#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    string reversedStr = "";  // To store the reversed string

    for(int i = str.length() - 1; i >= 0; i--){
        reversedStr += str[i];  // Add each character to the reversed string
    }

    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}

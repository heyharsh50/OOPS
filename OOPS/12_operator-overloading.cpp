#include<iostream>
using namespace std;

class Add{
    public:
        int value;
        Add(int v = 0) : value(v) {}
        
        // Overloading the '+' operator
        Add operator+(const Add& obj) {
            Add temp;
            temp.value = this->value + obj.value;
            return temp;
        }
        
        void display() {
            cout << "Value = " << value << endl;
        }
};

int main(){

    Add a1(10), a2(20);
    Add a3 = a1 + a2;  // This calls the overloaded '+' operator
    a3.display();      // Output: Value = 30
    
    return 0;
}

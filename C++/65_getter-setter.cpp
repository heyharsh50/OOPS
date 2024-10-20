// setter --> to set private values
// getter --> to get values of private values

// Abstraction --> hiding unnecessary data from outside a class
// getter --> fun() that makes a private attribute READABLE
// setter --> fun() that makes a private attribute WRITEABLE

#include<iostream>
using namespace std;

class Stove{
    private:
        int temp = 0;

    public:
        int getTemp(){
            return temp;
        }

        void setTemp(int temp){

            if(temp < 0){
                this->temp = 0;
            }
            else if(temp >= 10){
                this->temp = 10;
            }
            else{
                this->temp = temp;
            }
            
        }
};

int main(){

    Stove stove1;

    stove1.setTemp(5);

    cout<<"Temperature setting is: "<<stove1.getTemp()<<endl;

    return 0;
}
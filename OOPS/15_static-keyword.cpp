#include<iostream>
using namespace std;

class A{
    public:
        int x;

        void incX(){
            x = x + 1;
        }
};

int main(){

    A obj;
    obj.x = 0;

    cout<< obj.x <<endl;
    obj.incX();
    cout<< obj.x <<endl;

    return 0;
}




/*
//static variables
void fun(){
    static int x = 0;       //initial statement will run only one time & other will run multiple times
    cout<<"X: "<<x<<endl;

    //cout<<"X: "<<x<<endl;    x = 0 and it will out from the fun() without using static
    x++;
}

int main(){

    fun();
    fun();
    fun();

    return 0;
}
*/
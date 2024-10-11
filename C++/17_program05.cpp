// Program that shows person is hungy or not
// we implememt this through ternary operator and we also see how to write output in diff ways.
// we use Boolean here Let's do this

#include<iostream>
using namespace std;

int main(){

    bool Hungry = true;

    Hungry ? cout<<"Bro, you are hungry !!"<<endl : cout<<"Ahh, you are full !!"<<endl;

    bool Hungry1 = false;

    cout<<(Hungry1 ? "Bro, you are hungry !!" : "Ahh, you are full !!")<<endl;

    return 0;

}
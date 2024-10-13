// arrays --> a data structure that can hold multiple values
//              values are accessed by an index number
//              "Kind of like a variable that holds multiple values"

#include<iostream>
using namespace std;

int main(){

    double prices[] = {5.00, 6.24, 7.34, 96.45};

    cout<<prices[0]<<endl;
    cout<<prices[1]<<endl;
    cout<<prices[2]<<endl;
    cout<<prices[3]<<endl;

    return 0;
}

/*int main(){

    string heros[4];             // declare the size heros[here]

    heros[0] = "IronMan";
    heros[1] = "Hulk";
    heros[2] = "Spiderman";
    heros[3] = "Aquaman";

    cout<<heros[0]<<endl;

    string cars[] = {"Bmw", "Audi", "Ferarri", "Mustang"};

    //cout<<cars<<endl;         it will show memory address

    cars[0] = "Scorpio";        // change the car of array

    cout<<cars[0]<<endl;
    cout<<cars[1]<<endl;
    cout<<cars[2]<<endl;
    cout<<cars[3]<<endl;

    return 0;

}*/
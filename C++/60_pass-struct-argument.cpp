//Passing struct as arguments

#include<iostream>
using namespace std;

struct car{
    string model;
    string color;
    int year;
};

void printCar(car &car){     //we'r just copying the original struct for original use & operator

    cout<<&car<<endl;
    cout<<car.model<<endl;
    cout<<car.color<<endl;
    cout<<car.year<<endl;
}

void paintCar(car car, string color){
    car.color = color;
}

int main(){

    car car1;
    car car2;

    car1.model = "Mustang";
    car1.color = "Yellow";
    car1.year = 2022;

    car2.model = "BMW";
    car2.color = "Blue";
    car2.year = 2024;

    cout<<&car1<<endl;

    paintCar(car1, "Red");
    paintCar(car2, "Voilet");

    printCar(car1);
    printCar(car2);

    return 0;
}
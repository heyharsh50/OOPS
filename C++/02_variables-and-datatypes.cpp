#include<iostream>
using namespace std;

int main(){

    int a;  //declaration
    a = 5;  //assignment

    cout<<a<<endl;

    int x = 5;
    int y = 10;

    cout<<x<<endl<<y<<endl;

    int sum = x + y;

    cout<<sum<<endl;

    //integer (whole number)

    int age = 21;
    int year = 2024;
    int days = 7.5;     // For include decimal use double

    cout<<age<<endl<<year<<endl<<days<<endl;

    // double (number including decimal)

    double price = 22.20;
    double temp = 33.4;
    double gpa = 7.32;

    cout<<price<<endl<<temp<<endl<<gpa<<endl;

    //single character (it stores inly single character)

    char grade = 'A';
    char initial = 'a';
    char currency = '$';

    cout<<grade<<endl<<initial<<endl<<currency<<endl;

    //boolean (true 1 or false 0)

    bool student = true;
    bool power = false;
    bool forSale = true;

    cout<<student<<endl<<power<<endl<<forSale<<endl;

    //string (objects that repersents a sequence of text)

    string name = "Harsh";
    cout<<"My name is "<<name<<endl;

    string day = "Friday";
    string food = "pizza";
    string address ="XYZ 21 street";

    cout<<day<<endl<<food<<endl<<address<<endl;
}
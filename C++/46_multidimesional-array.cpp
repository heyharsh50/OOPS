// 2D array [No. of rows][No. of columns] i.e [3][4] --> 12 elements
#include<iostream>
using namespace std;

int main(){

    string cars[][3] = {{"BMW", "FERRARI", "AUDI"},
                        {"SCORPIO", "KIA", "TATA"},
                        {"SPLENDOR", "BAJAJ", "HONDA"}};

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){

        for(int j = 0; j < columns; j++){

            cout<<cars[i][j]<<" ";
        }
        cout<<endl;
 
    }

    return 0;
}
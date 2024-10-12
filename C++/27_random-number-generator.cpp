// pseudo-random --> NOT truly random (but close)

#include<iostream>
#include<ctime>
using namespace std;

/*int main(){

    srand(time(NULL));           srand(time(NULL)) ensures that each time you run the program, 
                                    rand() will produce different numbers instead of repeating the same sequence.

    int num = (rand() % 6) + 1;

    cout<<num<<endl;    

}*/

// for three dice roll
int main(){

    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
}
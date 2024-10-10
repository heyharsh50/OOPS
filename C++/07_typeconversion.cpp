//type conversion --> conversion a value of one data type to another
//                    Implicit = automatic
//                    Explicit = Precede value with new data type (int)

#include<iostream>
using namespace std;

int main(){

    char x = 97;
    cout<<x<<endl;
    /* Here we implicitly cast 97. and ascii table 97 is a so, the o/p is a */

    cout<<(char)100<<endl;
    /* Here we explicitly cast 100. and ascii table 97 is a so, the o/p is a */

    /* how it useful for us? 
        Suppose students have an online exam and after
        attempting ques let say student correct the 8, out of 10
        and i have to give them score in percentage. */

    int correct = 8;
    int questions = 10;

    int score = correct / (double) questions * 100;      //for percentage
    cout<<score<<"%"<<endl;

    // here we use explicit because int/int gives 0.8 and due to int only 0 display.

}


// Program to calculate percentage of student score on the basis of correct ques and ques.
#include<iostream>
using namespace std;

int main(){
    
    int correct, questions, score;
    
    cout<<"Enter the number of questions: "<<endl;
    cin>>questions;
    
    cout<<"Enter the number of question you corrected: "<<endl;
    cin>>correct;
    
    score = correct / (double) questions * 100;
    
    cout<<"You scored "<<score<<"%"<<endl;
    
    return 0;
}
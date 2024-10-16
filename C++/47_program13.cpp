// Quiz program in c++

#include<iostream>
using namespace std;

int main(){

    string questions[] = {"1. What year was C++ created ? ",
                          "2. Who invented C++ ? ",
                          "3. What is the predecessor of C++ ? ",
                          "4. Is the Earth flat? "};
                        
    string options[][4] = {{"A. 1969", "B. 1975", "D. 1985", "E. 1989"},
                            {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                            {"A. C", "B. C+", "C. C--", "D. B++"},
                            {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};
    int size = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score;

    for(int i = 0; i<size; i++){
        cout<<"***********************************"<<endl;
        cout<<questions[i]<<endl;
        cout<<"***********************************"<<endl;

        int size2 = sizeof(options[0]) / sizeof(options[i][0]);

        for(int j=0; j<size2; j++){

            cout<<options[i][j]<<endl;
        }

        cin>>guess;
        guess=toupper(guess);

        if(guess == answerKey[i]){
            cout<<"Correct !!"<<endl;
            score++;
        }
        else{
            cout<<"Wrong !!"<<endl;
            cout<<"Answer: "<<answerKey[i]<<endl;
        }
    }
    cout<<endl;
    cout<<"****************************************"<<endl;
    cout<<"                 RESULT              "<<endl;
    cout<<"****************************************"<<endl;
    cout<<"CORRECT GUESSES: "<< score <<endl;
    cout<<"# of Questions: "<< size  <<endl;
    cout<<"SCORE: "<< (score/(double)size)*100 <<"%"<<endl;

    return 0;

}
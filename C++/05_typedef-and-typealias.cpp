//typedef --> reserved keyword used to create an additional name
//            (alias) for another data type.
//            New identifier for an existing type
//            Helps with readability and reduces typos

#include<iostream>
#include<vector>
using namespace std;

//syntax --> [typedef existing_type new_type_name;]

//typedef vector<pair<string, int>> pairlist_t;
typedef string text_t;
typedef int num;

//same as typedef there is also 'using' keyword.
using d = double;

int main(){

    //pairlist_t pairlist;
    text_t myName = "Harsh";

    cout<<myName<<endl;

    num age = 21;

    cout<<age<<endl;

    d myBalance = 80000.490;

    cout<<myBalance<<endl;

}
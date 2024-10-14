// fill() --> Fills a range of elements with a specified value
//              fill(begin, end, value)

#include<iostream>
using namespace std;

int main(){

    //here is only 10 pizza if we have 100 pizza then we have to put 100 pizza array (type)
    //so, we use fill()
    //string foods[10] = {"Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza"};

    //printing pizza
    string foods[100];
    fill(foods, foods + 100, "Pizza");

    for(string food : foods){

        cout<<food<<endl;
    }
    

    return 0;
}
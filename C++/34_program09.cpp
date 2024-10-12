// Program to implement Banking system {withdraw money, deposit money, show balance}

#include<iostream>
#include<iomanip>
using namespace std;

void showBalance(double balance){

    cout<<"Your balance is: Rs"<<setprecision(2)<<fixed<<balance<<endl;
}


double deposit(){
    double amount = 0;

    cout<<"Enter amount to be deposited: ";
    cin>>amount;

    if(amount > 0){
        return amount;
    }
    else{
        cout<<"That's not a valid amount :( "<<endl;
        return 0;
    }
}


double withdraw(double balance){
    double amount = 0;

    cout<<"Enter amount to be withdrawn: ";
    cin>>amount;

    if(amount > balance){
        cout<<"Insufficient Balance !"<<endl;
        return 0;
    }
    else if(amount < 0){
       cout<<"That's not a valid amount !"<<endl;
       return amount;
    }
    else{
        return amount;
    }
}

int main(){

    string name;
    double balance = 0;
    int choice = 0;

        cout<<"Please Enter your name to proceed: ";
        getline(cin, name);

    do{

        cout<<endl<<"************ Welcome "<<name<<" !!"<<" ************"<<endl;
        cout<<endl;

        cout<<"******************"<<endl;
        cout<<"Enter your choice:"<<endl;
        cout<<"******************"<<endl;
        cout<<endl;

        cout<<"1. Show Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>choice;

        cin.clear();
        fflush(stdin);

        switch(choice){
            case 1:
                showBalance(balance);
                break;
        
            case 2:
                balance += deposit();
                showBalance(balance);
                break;

            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;

            case 4:
                cout<<"Thanks for visiting !!"<<endl;
                break;
        
            default:
                cout<<"Invalid choice !"<<endl;
        }
    }while(choice != 4);

    return 0;
}
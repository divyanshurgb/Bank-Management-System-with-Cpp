#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class bank {
    char name[100], add[100], y;
    int balance;
    public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void Display_account();
    };

void bank :: open_account() {
cout<<"enter your full name: ";
cin.ignore();
cin.getline(name, 100);
cout<<"enter your address ::";
cin.ignore();
cin.getline(add, 100);
cout<<"what type of account you want to open saving (s) or or current (c)";
cin>>y;
cout<<"enter amount for deposit:";
cin>>balance;
cout<<"your account is created \n";

void deposit :: deposit_money() {
    int a;
cout<<"enter how much you want to deposit:";
cin>>a;
balance += a;
cout<<"total amount you deposit :: \t"<<balance;
}

void bank:: Display_account() {
cout<<"your full name :: \t"<<name;
cout<<"Your address :: \t"<<add;
cout<<"type of account that you open :: \t" <<y;
cout<<"amount you deposit :: \t" <<balance;
}

void bank:: Withdraw_money() {
    float amount;
cout<<"\n withdraw ::";
cout<<"enter amount to withdraw :: ";
cin>>amount;
balance-=amount;
cout<<"now total amount is left :: "<<balance;
}

int main() {
    int ch;
    bank obj;
    do {
    cout<<"1. Open account \n";
    cout<<"2. deposit money \n";
    cout<<"3. withdraw money \n";
    cout<<"4. withdraw money \n";
    cout<<"5. Exit";
    cout<<"select the option from abovev \n";
    cin>>ch;
    switch(ch) {
    case 1: <<"1. open account \n";
    obj.open_account();
    break;
    case 2: <<"2. deposit account \n";
    obj.deposit_money();
    break;
    }
    case 3: <<"3. withdraw money: \n";
    obj.withdraw_money();
    break;
    case 4: <<"4. display account \n";
    obj.Display_account();
    break;
    case 5:
        if(ch == 5) {
            exit(1);
        }
    default:
        cout<<"Please select other option \n";
        cout<<"\n do you wan tto select next option then press :: y \n";
        cout<<"if you want to exit press :: N";
    x=getch();
    if(x=='n'||x=='N')
        exit(0);
    } while(x=='y' || x=='y');

    getch();
return 0;
}

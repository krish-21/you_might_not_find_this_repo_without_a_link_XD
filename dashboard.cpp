#include <iostream>
#include <string>

#include "investor_class.h"
#include "dashboard.h"

using namespace std;

char print_dashboard(Investor &user, int day)
{
    char a;
    
    cout<<"*****************************************---DASHBOARD---*****************************************";
    cout<<endl<<endl;

    cout<<user.get_name()<<"'s Portfolio :                                         Day "<<day<<endl<<endl<<endl;

    cout<<"Net Worth : "<<user.get_net_worth()<<endl<<endl;

    cout<<"Stocks owned : "<<endl<<endl;
    
    user.print_my_stocks();
    cout<<endl<<endl; 

    cout<<"Money in Wallet        : "<<user.get_wallet_balance()<<endl<<endl;
    
    cout<<"Current Credit Balance : "<<user.get_credit_balance()<<endl<<endl<<endl;

    cout<<"MENU :"<<endl<<endl;
    cout<<"        \"a\" to add money to wallet"<<endl<<endl;
    cout<<"        \"s\" to begin Stock Trading"<<endl<<endl;
    cout<<"        \"t\" to look up Transaction Records"<<endl<<endl;
    cout<<"        \"n\" to proceed to next day"<<endl<<endl;
    cout<<"        \"e\" to exit the program"<<endl<<endl;

    cout<<"Action :  ";
    cin>>a;

    return a;
}

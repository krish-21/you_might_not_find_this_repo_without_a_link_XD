#include <iostream>
#include <string>
#include "investor_class.h"
#include "dashboard.h"

using namespace std;

char print_dashboard(Investor user)
{
    int a;
    
    cout<<"***********************************************************************";
    cout<<"***********************************************************************";
    cout<<endl<<endl;

    cout<<"Portfolio"<<endl<<endl<<endl;

    cout<<"Current Net Worth : "<<endl<<endl;

    
    cout<<"Current Stocks owned : "<<endl;
    
    user.print_my_stocks();
    cout<<endl; 

    cout<<"Money in Wallet : "<<user.get_wallet_balance()<<endl<<endl;
    
    cout<<"Current Credit Balance : "<<user.get_credit_balance()<<endl<<endl<<endl;

    cout<<"Press \"a\" to add money to wallet"<<endl<<endl;
    cout<<"Press \"s\" to begin Stock Trading"<<endl<<endl;
    cout<<"Press \"n\" to proceed to next day"<<endl<<endl;
    cout<<"Press \"e\" to exit the program"<<endl<<endl;

    cin>>a;

    return a;
}

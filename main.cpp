#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <fstream>

#include "investor_class.h"
#include "set_up_screen.h"
#include "dashboard.h"
#include "money_management.h"
#include "stock_manipulation.h"
#include "stock_trading.h"
#include "search_data.h"

using namespace std;

int main()
{
    
    double stock_array[5];
    string stock_names[5]{"Google","Apple","Microsoft","Facebook","Amazon"};
    Investor user;
    int day=1;
    char action, ans = 'y';

    set_up_function(user);
    
    set_the_credit_limit(user);

    while(true)
    {
        share_manipulation();

        read_shares_into_array(stock_array);

        if(day%5==0)
        {
            user.reset_credit_balance();
        }

        calculate_net_worth(user, stock_array);

        label1:
        
        action = print_dashboard(user, day);
        
        switch(action)
        {
            case 'a':

                adding_money(user);
                break;
            
            case 's':
            
                print_stocks(stock_array, stock_names);
                trade_stocks(user, stock_array, stock_names, day);
                break;
                
            case 't':

                search_records();
                break;
            
            case 'n':
                cout<<"Proceeding to the next day"<<endl<<endl;
                break;

            case 'e':

                cout<<"Thank you for using iStock"<<endl<<endl;
                cout<<"See you again !!!";
                exit(0);
                break;
            
            default:
                cout<<"Invalid input !"<<endl<<endl;
                break;
        }

        if(action != 'n')
        {
            label2:

            cout<<"Go back to Dashboard (y/n) ?";
            cin>>ans;

            if(ans=='y')
                goto label1;
            else
                goto label2;
        }
        
        ++day;
    }

    return 0;
}

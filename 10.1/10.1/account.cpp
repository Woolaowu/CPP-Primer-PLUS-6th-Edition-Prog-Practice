//
//  account.cpp
//  10.1
//
//  Created by 丁子丰 on 2019/12/29.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#include "account.hpp"
#include <string>
#include <iostream>
using namespace std;

Account :: Account(const string & na, const string & account_na, double dep)
{
    name = na;
    account_name = account_na;
    deposit = dep;
}

void Account :: show() const
{
    cout << "NAME: " << name << endl;
    cout << "ACCOUNT_NAME: " << account_name << endl;
    cout << "DEPOSIT: " << deposit << endl;
    cout << "----------" << endl;
}

void Account :: in(double in_amount)
{
    cout << "-----Depositing money-----" << endl;
    deposit += in_amount;
    cout << "-----DONE-----" << endl;
}
int Account :: out(double out_amount)
{
    cout << "-----Withdrawl-----" << endl;
    if (out_amount > deposit)
    {
        cout << "Not enought money! Please enter the amount again!\n";
        return 1;
    }
    else
    {
        deposit -= out_amount;
        cout << "-----DONE-----\n";
        return 0;
    }
}


//
//  main.cpp
//  10.1
//
//  Created by 丁子丰 on 2019/12/29.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#include <iostream>
#include <string>
#include "account.hpp"
int main()
{
    using namespace std;
    string Name, Account_name;
    double Dep, in_am, out_am;
    int flag;
    cout << "Please enter name of account holder:\n";
    getline(cin, Name);
    cout << "Please enter name of account:\n";
    getline(cin, Account_name);
    cout << "Please enter the amount of deposit:\n";
    cin >> Dep;
    string & Na = Name;
    string & Ac = Account_name;
    Account account(Na, Ac, Dep);
    account.show();
    cout << "Please enter the amount of in:\n";
    cin >> in_am;
    account.in(in_am);
    cout << "Please enter the amount of out:\n";
    cin >> out_am;
    flag = account.out(out_am);
    if (flag)
    {
        cout << "Please enter the amount of out:\n";
        cin >> out_am;
        flag = account.out(out_am);
    }
    account.show();
    return 0;
}

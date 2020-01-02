//
//  account.hpp
//  10.1
//
//  Created by 丁子丰 on 2019/12/29.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#ifndef account_hpp
#define account_hpp


#include <string>
using namespace std;
class Account{
private:
    string name;
    string account_name;
    double deposit;
public:
    Account(const string & na, const string & account_na, double dep);
    void show() const;
    void in(double in_amount);
    int out(double out_amount);
};

#endif /* account_hpp */

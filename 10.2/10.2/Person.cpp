//
//  Person.cpp
//  10.2
//
//  Created by 丁子丰 on 2019/12/30.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#include "Person.hpp"
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
Person :: Person(const string & ln, const char * fn)    //should not write default argument when definition.
{
    lname = ln;
    strcpy(fname,fn);
}
void Person :: show() const
{
    cout << fname << " " << lname;
}
void Person :: formalshow() const
{
    cout << lname << " " << fname;
}

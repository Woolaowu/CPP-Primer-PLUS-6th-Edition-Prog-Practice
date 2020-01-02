//
//  Plorg.hpp
//  10.7
//
//  Created by 丁子丰 on 2020/1/2.
//  Copyright © 2020 Woolaowu. All rights reserved.
//

#ifndef Plorg_hpp
#define Plorg_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
class Plorg
{
private:
    string name;
    int CI;
public:
    Plorg(string n = "Plorga", int scr = 50);
    void show() const;
    
};
#endif /* Plorg_hpp */

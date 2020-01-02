//
//  Plorg.cpp
//  10.7
//
//  Created by 丁子丰 on 2020/1/2.
//  Copyright © 2020 Woolaowu. All rights reserved.
//

#include "Plorg.hpp"

Plorg::Plorg(string n, int scr)
{
    CI = scr;
    if (n.length()>19)
    {
        std::cout << "-----Invalid Name-----\n-----Using Default Name-----\n";
        name = "Plorga";
    }
    else
    {
        name = n;
    }
}

void Plorg::show() const
{
    std::cout << "-----NAME-----\n" << name << std::endl;
    std::cout << "-----CI-----\n" << CI << std::endl;
}

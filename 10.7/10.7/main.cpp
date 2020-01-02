//
//  main.cpp
//  10.7
//
//  Created by 丁子丰 on 2020/1/2.
//  Copyright © 2020 Woolaowu. All rights reserved.
//

#include "Plorg.hpp"
int main()
{
    Plorg pl;
    std::cout << "-----DEFAULT-----\n";
    pl.show();
    std::cout << "-----CUSTOM-----\n";
    string n;
    int scr;
    std::cout << "Please enter a name:\n";
    getline(std::cin, n);
    std::cout << "Please enter a score:\n";
    std::cin >> scr;
    Plorg cus(n, scr);
    std::cout << "-----INFO-----\n";
    cus.show();
    return 0;
}

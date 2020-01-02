//
//  Golf.cpp
//  10.3
//
//  Created by 丁子丰 on 2019/12/30.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#include "Golf.hpp"
#include <iostream>
#include <cstring>
extern const int LEN;
//void Golf :: setgolf(golf & g, const char * name, int hc)
//{
//    strcpy(g.fullname, name);
//    g.handicap = hc;
//}
Golf :: Golf()
{
    strcpy(fullname,"Vika");
    handicap = 0;
}
Golf :: Golf(const char * name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}




void Golf :: showgolf() const
{
    std::cout << "Now show the info of " << fullname << std::endl;
    std::cout << "Name: " << fullname << std::endl;
    std::cout << "Handicap: " << handicap << std::endl;
}

void Golf :: setgolf()
{
    //char type_name[LEN];
    //int type_hc;
    std::cout << "Please enter name:\n";
    std::cin.getline(fullname, LEN);
    //std::cout << g.fullname;

    std::cout << "Please enter hc:\n";
    std::cin >> handicap;
    std::cin.get();
        
    //return *this;


}

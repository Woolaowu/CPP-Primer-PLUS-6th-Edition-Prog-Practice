//
//  main.cpp
//  10.6
//
//  Created by 丁子丰 on 2020/1/2.
//  Copyright © 2020 Woolaowu. All rights reserved.
//

#include <iostream>
#include "Move.hpp"
int main()
{
    Move m1;
    std::cout << "-----M1-----\n";
    m1.showmove();
    Move m2(1,2);
    std::cout << "-----M2-----\n";
    m2.showmove();
    Move & m2ref = m2;
    Move m3;
    m3 = m2.add(m2ref);
    std::cout << "-----M3-----\n";
    m3.showmove();
    m3.reset();
    std::cout << "-----M3reset-----\n";
    m3.showmove();
    
    return 0;
}

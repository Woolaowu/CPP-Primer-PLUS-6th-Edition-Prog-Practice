//
//  Move.cpp
//  10.6
//
//  Created by 丁子丰 on 2020/1/2.
//  Copyright © 2020 Woolaowu. All rights reserved.
//

#include "Move.hpp"
#include <iostream>
Move::Move(double a, double b) //赋初始值只在声明中
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
}

Move Move::add(const Move & m) const
{
    Move move(x+m.x, y+m.y);
    return move;
}
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}

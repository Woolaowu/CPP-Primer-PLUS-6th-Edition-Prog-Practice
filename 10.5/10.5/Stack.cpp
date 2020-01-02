//
//  Stack.cpp
//  10.5
//
//  Created by 丁子丰 on 2019/12/30.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#include "Stack.hpp"
Stack::Stack()
{
    top = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item)
{
    if(top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if(top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}

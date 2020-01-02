//
//  List.cpp
//  10.8
//
//  Created by 丁子丰 on 2020/1/2.
//  Copyright © 2020 Woolaowu. All rights reserved.
//

#include "List.hpp"
List::List()
{
    top = 0;
}
bool List::isempty() const
{
    return top == 0;
}
bool List::isfull() const
{
    return top == MAX;
}
void List::push(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
    }
    else
    {
        std::cout << "Invalid Operation: Full Items\n";
    }
}
void List::visit(void (*pf)(Item & item))
{
    for(int i = 0; i < top; i++)
    (*pf)(items[i]);
}
void List::show() const
{
    for(int i = 0; i < top; i++)
    {
        std::cout << items[i] << std::endl;
    }
}
void change (Item & item)
{
    std::cout << "Input item:\n";
    std::cin >> item;
}

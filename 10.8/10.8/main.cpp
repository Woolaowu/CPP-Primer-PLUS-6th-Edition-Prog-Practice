//
//  main.cpp
//  10.8
//
//  Created by 丁子丰 on 2020/1/2.
//  Copyright © 2020 Woolaowu. All rights reserved.
//

#include "List.hpp"

int main()
{
    List list;
    if (list.isempty())
    {
        std::cout << "Empty list now\n";
    }
    if (!list.isfull())
    {
        std::cout << "List not full\n";
    }
    int in[11] = {1,2,3,4,5,6,7,8,9,10,11}; //longer than MAX
    for (int i = 0; i < sizeof(in)/sizeof(in[0]); i++)
    {
        list.push(in[i]);
    }
    std::cout << "-----INFO-----\n";
    list.show();
    list.visit(change);
    std::cout << "-----CHANGED-----\n";
    list.show();
    return 0;
}

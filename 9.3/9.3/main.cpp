//
//  main.cpp
//  9.3
//
//  Created by 丁子丰 on 2019/12/9.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#include <iostream>
#include "Header.h"
#include <string>
const int BUF = 512;
int main()
{
    chaff * strl[2];
    char buffer[BUF];
    strl[0] = new (buffer) chaff;
    strl[1] = new (buffer + sizeof(chaff)) chaff;
    for (int i=0; i<=1; i++)
    {
        set(strl[i], i);
    }
    for (int j=0; j<=1; j++)
    {
        show(strl[j], j);
    }
    return 0;
}


void set(chaff * ch, int i)
{
    std::cout << "Please enter dross for struct " << i << std::endl;
    std::cin.get(ch->dross,20);
    std::cin.get();
    std::cout << "Please enter slag for struct " << i << std::endl;
    std::cin >> ch->slag;
    std::cin.get();
}
void show(chaff * ch, int j)
{
    std::cout << "----------INFO " << j << "----------\n";
    std::cout << "dross:\t" << ch->dross << std::endl;
    std::cout << "slag:\t" << ch->slag << std::endl;
}

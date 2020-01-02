//
//  golf.cpp
//  PlaygroundCpp
//
//  Created by 丁子丰 on 2019/12/8.
//  Copyright © 2019 Woolaowu. All rights reserved.
//
#include "Golf.hpp"
#include <iostream>
using namespace std;
const int NUM = 5;
extern const int LEN;
//golf g[NUM];
int main()
{
    //int count = 0;
    //char * type_name;
    //int type_hc;
    Golf g[NUM];
    for (int i=0; i<NUM; i++)
    {
        cout << "g[" << i+1 << "]:\n";
        g[i].setgolf();
        
    }
    
    for (int j=0; j<NUM; j++)
    {
        g[j].showgolf();
    }
    return 0;
}

//
//  main.cpp
//  10.5
//
//  Created by 丁子丰 on 2019/12/30.
//  Copyright © 2019 Woolaowu. All rights reserved.
//
#include "Stack.hpp"
#include <iostream>
customer c1 = {"Vika", 25.6};
customer c2 = {"Zifeng", 71.8};
int main() {
    double pay = 0.0;
    Stack stack;
    Item & c11 = c1;
    Item & c22 = c2;
    stack.push(c11);
    stack.push(c22);
    stack.pop(c11);
    pay += c11.payment;
    stack.pop(c22);
    pay += c22.payment;
    std::cout << pay << std::endl;
    return 0;
}

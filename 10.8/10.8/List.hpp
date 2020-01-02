//
//  List.hpp
//  10.8
//
//  Created by 丁子丰 on 2020/1/2.
//  Copyright © 2020 Woolaowu. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>
#include <iostream>
typedef int Item; //use int for test
class List
{
private:
    static const int MAX = 10; //max length of the list
    Item items[MAX];
    int top;
public:
    List();
    bool isempty() const;
    bool isfull() const;
    void push(const Item & item);
    void show() const;
    void visit(void (*pf)(Item & item));
};
void change (Item & item);
#endif /* List_hpp */

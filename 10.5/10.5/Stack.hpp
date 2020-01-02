//
//  Stack.hpp
//  10.5
//
//  Created by 丁子丰 on 2019/12/30.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
struct customer{
    char fullname[35];
    double payment;
};
typedef customer Item;

class Stack{
private:
    static const int MAX = 10;
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item); //pop top into item
};
#endif /* Stack_hpp */

//
//  main.cpp
//  10.2
//
//  Created by 丁子丰 on 2019/12/30.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#include <iostream>
#include "Person.hpp"
int main() {
    Person one;
    Person two("Symthecraft");
    Person three("Dimwiddy", "Sam");
    one.show();
    cout << endl;
    two.show();
    cout << endl;
    two.formalshow();
    cout << endl;
    three.show();
    cout << endl;
    three.formalshow();
    cout << endl;
    return 0;
}

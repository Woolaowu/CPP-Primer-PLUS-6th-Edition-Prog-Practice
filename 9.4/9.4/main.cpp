//
//  main.cpp
//  9.4
//
//  Created by 丁子丰 on 2019/12/9.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#include <iostream>
#include "9.hpp"

int main()
{
    using namespace SALES;
    Sales s1;
    Sales s2;
    double ar[3] = {4.0, 3.0, 2.0};
    setSales(s1, ar, 3);
    showSales(s1);
    setSales(s2);
    showSales(s2);
    return 0;
}

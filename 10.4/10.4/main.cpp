//
//  main.cpp
//  10.4
//
//  Created by 丁子丰 on 2019/12/30.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#include <iostream>
#include "Sales.hpp"

int main()
{
    using namespace SALES;
    //Sales s1;
    //Sales s2;
    double ar[3] = {4.0, 3.0, 2.0};
    Sales s1(ar, 3);
    s1.showSales();
    Sales s2;
    s2.setSales();
    s2.showSales();
    return 0;
}

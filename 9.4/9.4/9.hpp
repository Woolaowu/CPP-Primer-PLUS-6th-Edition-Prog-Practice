//
//  9.hpp
//  9.4
//
//  Created by 丁子丰 on 2019/12/9.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#ifndef __hpp
#define __hpp

#include <stdio.h>
namespace SALES
{
const int QUARTERS = 4;
struct Sales{
    double sales[QUARTERS];
    double average;
    double max;
    double min;
};
void setSales(Sales & s, const double ar[], int n);
void setSales(Sales & s);
void showSales(const Sales & s);
}
#endif /* __hpp */

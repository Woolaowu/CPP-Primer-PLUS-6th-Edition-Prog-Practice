//
//  Sales.hpp
//  10.4
//
//  Created by 丁子丰 on 2019/12/30.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#ifndef Sales_hpp
#define Sales_hpp

#include <stdio.h>
namespace SALES
{
const int QUARTERS = 4;
class Sales{
private:
    double sales[QUARTERS];
    double average;
    double max;
    double min;
public:
    Sales();
    Sales(const double ar[], int n);
    //void setSales(Sales & s, const double ar[], int n);
    void setSales();
    void showSales() const;
};

}
#endif /* Sales_hpp */

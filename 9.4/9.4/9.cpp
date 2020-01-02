//
//  9.cpp
//  9.4
//
//  Created by 丁子丰 on 2019/12/9.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#include "9.hpp"
#include <iostream>
namespace SALES
{
void setSales(Sales & s, const double ar[], int n)
{
    using namespace std;
    cout << "--------Setting info...--------\n";
    for(int i = 0; i < QUARTERS; i++)
    {
        if(i < n)
            s.sales[i] = ar[i];
        else
            s.sales[i] = 0.0;
    }
    double sum = 0.0;
    double max = s.sales[0], min = s.sales[0];
    double cur;
    for(int i = 0; i < QUARTERS; ++i)
    {
        cur = s.sales[i];
        if(cur > max)
            max = cur;
        if(cur < min)
            min = cur;
        sum += cur;
    }
    s.average = sum/(float)QUARTERS;
    s.max = max;
    s.min = min;
    cout << "--------DONE--------\n";
}
void setSales(Sales & s)
{
    int n;
    using namespace std;
    cout << "--------Setting info...--------\n";
    cout << "Please enter the number of the array:\n";
    cin >> n;
    cin.get();
    while (n > QUARTERS)
    {
        cout << "INVALID! Number greater than QUARTERS!\n";
        cout << "Please enter the number of the array:\n";
        cin >> n;
        cin.get();
    }
    cout << "--------VALID--------\n";
    cout << "Please enter the sales of each quarter:\n";
    for(int i = 0; i < QUARTERS; i++)
    {
        if(i < n)
        {
            cout << "Quarter " << i << " :";
            cin >> s.sales[i];
            cin.get();
            cout << endl;
        }
        else
            s.sales[i] = 0.0;
    }
    double sum = 0.0;
    double max = s.sales[0], min = s.sales[0];
    double cur;
    for(int i = 0; i < QUARTERS; ++i)
    {
        cur = s.sales[i];
        if(cur > max)
            max = cur;
        if(cur < min)
            min = cur;
        sum += cur;
    }
    s.average = sum/(float)QUARTERS;
    s.max = max;
    s.min = min;
    cout << "--------DONE--------\n";
}

void showSales(const Sales & s)
{
    using namespace std;
    cout << "--------INFO--------\n";
    cout << "sales: ";
    for(int i = 0; i < QUARTERS; ++i)
        cout << s.sales[i] << " ";
    cout << endl;
    cout << "average: " << s.average << endl;
    cout << "max: " << s.max << endl;
    cout << "min: " << s.min << endl;
}

}

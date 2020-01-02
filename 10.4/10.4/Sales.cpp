//
//  Sales.cpp
//  10.4
//
//  Created by 丁子丰 on 2019/12/30.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#include "Sales.hpp"
#include <iostream>
SALES::Sales :: Sales()
{
    for(int i = 0; i < QUARTERS; i++)
    {
        this->sales[i] = 0.0;
    }
    max = 0.0;
    min = 0.0;
    average = 0.0;
}

SALES::Sales :: Sales(const double ar[], int n)
{
    using namespace std;
    for(int i = 0; i < QUARTERS; i++)
    {
        if(i < n)
            this->sales[i] = ar[i];
        else
            this->sales[i] = 0.0;
    }
    double sum = 0.0;
    double max = this->sales[0], min = this->sales[0];
    double cur;
    for(int i = 0; i < QUARTERS; ++i)
    {
        cur = this->sales[i];
        if(cur > max)
            max = cur;
        if(cur < min)
            min = cur;
        sum += cur;
    }
    this->average = sum/(float)QUARTERS;
    this->max = max;
    this->min = min;
}

void SALES::Sales :: setSales()
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
            cin >> this->sales[i];
            cin.get();
            cout << endl;
        }
        else
            this->sales[i] = 0.0;
    }
    double sum = 0.0;
    double max = this->sales[0], min = this->sales[0];
    double cur;
    for(int i = 0; i < QUARTERS; ++i)
    {
        cur = this->sales[i];
        if(cur > max)
            max = cur;
        if(cur < min)
            min = cur;
        sum += cur;
    }
    this->average = sum/(float)QUARTERS;
    this->max = max;
    this->min = min;
    cout << "--------DONE--------\n";
}

void SALES::Sales :: showSales() const
{
    using namespace std;
    cout << "--------INFO--------\n";
    cout << "sales: ";
    for(int i = 0; i < QUARTERS; ++i)
        cout << this->sales[i] << " ";
    cout << endl;
    cout << "average: " << this->average << endl;
    cout << "max: " << this->max << endl;
    cout << "min: " << this->min << endl;
}



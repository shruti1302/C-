//
//  main.cpp
//  TASK3
//
//  Created by Shruti Agarwal on 20/08/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if(year%4==0)
        cout<<"It is a leap year.";
    else
        cout<<"It is not a leap year.";
    return 0;
}

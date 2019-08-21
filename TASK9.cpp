//
//  main.cpp
//  TASK9
//
//  Created by Shruti Agarwal on 21/08/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int daysin, year, week, day;
    
    cout<<"Input the number of days: ";
    cin>>daysin;
    
    year = daysin / 365;
    week =(daysin % 365) / 7;
    day =(daysin % 365) % 7;
    
    cout<<"Years: "<<year;
    cout<<"Weeks: "<<week;
    cout<<"Days: "<<day;
    
    
    
    
}

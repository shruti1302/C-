//
//  main.cpp
//  TASK7
//
//  Created by Shruti Agarwal on 20/08/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <iostream>
using namespace std;
void swap(int a,int b);

int main()
{
    int x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    swap(x,y);
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Swapped numbers are: "<<a<<" "<<b;
    
}

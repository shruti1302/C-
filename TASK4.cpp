//
//  main.cpp
//  TASK4
//
//  Created by Shruti Agarwal on 20/08/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    //Write a C++ program to calculate sum of all the elements of an array.
    int arr[50],sum=0, i, n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"\nEnter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"Sum of elements of array is "<<sum;
    return 0;
    
}

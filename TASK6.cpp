//
//  main.cpp
//  TASK6
//
//  Created by Shruti Agarwal on 20/08/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int arr[20], n, i, j, temp;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"ENter the elements: ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    cout<<"The sorted array is: ";
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
    return 0;
    
}


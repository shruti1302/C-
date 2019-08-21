//
//  main.cpp
//  TASK5
//
//  Created by Shruti Agarwal on 20/08/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int arr[20], smallest, largest, n, i;
    
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    
    smallest=arr[0];
    largest=arr[0];
    
    for(i=1;i<n;i++)
    {
        if(arr[i]<smallest)
            smallest=arr[i];
    }
    
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
            largest=arr[i];
    }
    
    cout<<"The smallest element is "<<smallest;
    cout<<"The largest element is "<<largest;
    
    return 0;
    
}

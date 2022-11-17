//
//  main.cpp
//  binary search
//
//  Created by Devanshu Rajpoot on 16/11/22.
//

#include <iostream>

using namespace std;

bool binsearch(int a[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid;
    
    while(start<=end) // be sure about this condition.
    {
        mid=(start/2)+(end/2);
        if(a[mid]==key)
            return true;
        
        else if(a[mid]>key)
            end=mid-1;

        else
            start=mid+1;
    }
    return false;
}

int main()
{
    int arr[]={2,4,6,8,9,11,14};
    
    int sz=sizeof(arr)/sizeof(int);
    cout<<binsearch(arr, sz, 1)<<"\n";
    
    return 0;
}

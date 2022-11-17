//
//  main.cpp
//  selection sort
//
//  Created by Devanshu Rajpoot on 17/11/22.
//

#include <iostream>

using namespace std;

void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

void selsort(int a[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[j]<a[i])
            {
                swap(&a[i],&a[j]);
            }
        }
    }
}

int main()
{
    int arr[]={7,14,6,11,9,1,4};
    
    int sz=sizeof(arr)/sizeof(arr[0]);
    
    selsort(arr, sz);
    
    for(int i=0;i<sz;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

//
//  main.cpp
//  bubble sort
//
//  Created by Devanshu Rajpoot on 18/11/22.
//

#include <iostream>

using namespace std;

void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

void blbsort(int ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(ar[j]>ar[j+1])
                swap(&ar[j],&ar[j+1]);
        }
    }
}

int main()
{
    int arr[]={7,14,6,11,9,1,4};
    
    int sz=sizeof(arr)/sizeof(arr[0]);
    
    blbsort(arr, sz);
    
    for(int i=0;i<sz;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

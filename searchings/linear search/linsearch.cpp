//
//  main.cpp
//  linear search
//
//  Created by Devanshu Rajpoot on 16/11/22.
//

#include <iostream>

using namespace std;

bool linsearch(int a[],int size,int key)
{
    for(int i=0;i<size-1;i++)
    {
        if(a[i]==key)
            return true;
    }
    return false;
    
}

int main()
{
    int arr[]={2,6,3,8,5,9,11};
    
    int sz=sizeof(arr)/sizeof(int);
    
    cout<<linsearch(arr , sz, 15)<<"\n";
    
    return 0;
}


//
//  main.cpp
//  swap
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

int main()
{
    int a=3;
    int b=6;
    cout<<a<<" "<<b<<endl;
    swap(&a , &b);
    cout<<a<<" "<<b<<endl;
    return 0;
}

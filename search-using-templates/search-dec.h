#include<iostream>
#include<algorithm>
#ifndef SEARCH_H
#define SEARCH_H
using namespace std;
template<class T>
int search(T *a,T key,int n)
{
   // T n,ch;
    int i=0;
   
   
    while(n--)
    {
        if(a[i]==key)
        return 1;
        i++;
    }
    return 0;
}
#endif
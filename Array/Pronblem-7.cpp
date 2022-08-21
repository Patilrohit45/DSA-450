#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>arr,int n)
{

    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(auto el:arr)
    {
        cout<<el<<" ";
    }

}
int main()
{
    vector<int>a={9, 8, 7, 6, 4, 2, 1, 3};
    int n=a.size();
    rotate(a,n);
    return 0;

}
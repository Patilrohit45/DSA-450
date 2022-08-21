#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int>ar,int n)
{
     for(auto el:ar)
    {
        cout<<el<<" ";
    }
}
void move(vector<int>arr,int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }
    printArray(arr,n);
}

int main()
{
    vector<int>a={ -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n=a.size();
    move(a,n);
    return 0;
}
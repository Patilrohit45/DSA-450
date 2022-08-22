#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long maxSubarraySum(vector<int> arr, int n)
{
    int maxSum=INT_MIN;
    int curSum=0;
    for(int i=0;i<n;i++)
    {   
        curSum+=arr[i];
        if(curSum>maxSum)
        {
            maxSum=curSum;
        }
        if(curSum<0)
        {
            curSum=0;
        }

    }        
    return maxSum;
        
        
}

int main()
{
    vector<int>a={1,2,3,-2,5};
    int n=a.size();
    cout<<maxSubarraySum(a,n);
    return 0;
}
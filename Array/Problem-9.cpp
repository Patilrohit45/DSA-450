#include<iostream>
#include<bits/stdc++.h>
using namespace std;


 int getMinDiff(vector<int> arr, int n, int k)
{
    sort(arr.begin(),arr.end());

    int curDiff=arr[n-1]-arr[0];
    int smallest =  arr[0]+k;
    int largest = arr[n-1]-k;

    int mi=0,ma=0;
    for(int i=0;i<n-1;i++)
    {
        mi=min(smallest,arr[i+1]-k);
        ma=max(largest,arr[i]+k);
        if(mi<0)
        {
            continue;
        }
        curDiff=min(curDiff,ma-mi);
    }
    cout<<ma<<" and "<<mi<<endl;
    cout<<curDiff<<endl;
    
    return curDiff;

}
int main()
{
    vector<int>a={3,9,12,16,20};
    int n=a.size();
    int k=3;
    cout<<getMinDiff(a,n,k);
    return 0;

}
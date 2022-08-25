#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minJumps(vector<int> arr, int n)
{
   
    int maxreach=arr[0];
    int step=arr[0];
    int jump=1;
    int i=1;
     if (n <= 1)
        return 0;
         if (arr[0] == 0)
        return -1;
    for(i=1;i<n;i++)
    {
        if(i==n-1)
        return jump;
        
        maxreach=max(maxreach,i+arr[i]);
        step--;
            if(step==0){
            jump++;
            if(i>=maxreach)
                return -1;
                step=maxreach-i;
            }
    }
        return -1;
        
}
int main()
{
    vector<int>a={1, 4, 3, 2, 6, 7};
    int n=a.size();
    cout<<minJumps(a,n);
    return 0;

}
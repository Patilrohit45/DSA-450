#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int> arr, int l, int r, int k)
{
    int res=0;
   for(int i=l;i<r;i++)
   {
        for(int j=i+1;j<r;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        if(i==k-1)
        {
            res=arr[i];
        }
   }
   return res;
   
}
int main(){
    vector<int>a={7, 10, 4, 20, 15};
    int k=4;
    cout<<kthSmallest(a,0,a.size()-1,k);
    return 0;
}
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
 void sort012(vector<int>arr, int n)
{
    int i,cnt0=0,cnt1=0,cnt2=0;
        for( i=0;i<n;i++)
        {
            switch(arr[i])
            {
                case 0:
                    cnt0++;
                    break;
                case 1:
                    cnt1++;
                    break;
                case 2:
                    cnt2++;
                    break;
            }
        }        
        i=0;
        while(cnt0>0){
            arr[i++]=0;
            cnt0--;
        }
            
        while(cnt1>0){
            arr[i++]=1;
            cnt1--;
        }
            
        while(cnt2>0)
            {
                arr[i++]=2;
            cnt2--;
            }
    printArray(arr,n)  ;     
}

int main()
{   
    vector<int>a={0,2,1,2,0};
    int n=a.size();

    sort012(a,n);
    return 0;

}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>reverseArray(vector<int>arr,int st,int e)
{
    while(st<e)
    {
        int temp = arr[st];
        arr[st]=arr[e];
        arr[e]=temp;
        st++;
        e--;
    }
    return arr;
}
int main()
{
    vector<int>a={4,5,1,2};
    vector<int>result = reverseArray(a,0,a.size()-1);
    for(auto n:result)
    {
        cout<<n<<" ";
    }
    return 0;
}
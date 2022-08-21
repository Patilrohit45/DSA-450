#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int doUnion(vector<int> a, int n, vector<int> b, int m)
{   
        
        set<int>res;
        for(auto el:a)
        {
            res.insert(el);
        }
        for(auto el2:b){
            res.insert(el2);
        }
    return res.size();
}
int main()
{

    vector<int>ar1={1,2,3,4,5};
    int n=ar1.size();
    vector<int>ar2={1,2,3};
    int m=ar2.size();
    cout<<doUnion(ar1,n,ar2,m);
    return 0;
}
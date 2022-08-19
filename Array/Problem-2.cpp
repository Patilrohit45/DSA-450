#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void getMaxMin(vector<int>arr)
{
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<arr.size();i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        else if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"Maximum element = "<<max<<endl;
    cout<<"Minimum element = "<<min<<endl;

}
int main()
{

    vector<int>a={5,40,1,55,300,4,3};
    getMaxMin(a);
    return 0;
}
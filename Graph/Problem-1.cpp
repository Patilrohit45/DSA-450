#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
        unordered_map<int,list<int>>adj;
        
        void addEdge(int u,int v,bool direction)
        {
            //Direction = 0 -> Undirected graph
            //Direction = 1 -> Directed graph

            //Create an edge
                adj[u].push_back(v);
                if(direction==0)
                {
                    adj[v].push_back(u);
                }
        }
        void printGraph()
        {
            for(auto i:adj)
            {
                cout<<i.first<<" -> ";
                for(auto j:i.second)
                {
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
};
int main()
{
    int n;
    cout<<"Enter the number of Nodes "<<endl;
    cin>>n;
    
    int m;
    cout<<"Enter the number of Edges "<<endl;
    cin>>m;
     
     graph g;
     
     for(int i=0;i<m;i++)
     {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
     }
    //printing graph
        g.printGraph();
    return 0;
}
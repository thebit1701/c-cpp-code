//vector :Here we use it to store adjacency lists of all vertices. We use vertex number as index in this vector.
//pair :  Here we use it to store adjacent vertex number and weight of edge connecting to the adjacent
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ver=5,i,j,k,weight,src,dest,v,w;
	cin>>n;
	vector<pair<int, int> > adj[ver]; 
	for(i=0;i<n;i++)
	{
		cin>>weight>>src>>dest;
		adj[u].push_back(make_pair(v, wt)); 
        adj[v].push_back(make_pair(u, wt));
	}
	for ( i = 0; i < ver; i++) 
    { 
        cout << "Node " << i << " makes an edge with \n"; 
        for (auto it = adj[i].begin(); it!=adj[i].end(); it++) 
        { 
            v = it->first; 
            w = it->second; 
            cout << "\tNode " << v << " with edge weight ="
                 << w << "\n"; 
        } 
        cout << "\n"; 
    } 
	
}

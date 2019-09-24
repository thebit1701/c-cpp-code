#include<bits/stdc++.h>
using namespace std;
void DFS(int n,vector<int>adj[],vector<bool>&visited)
{
	int i;
	visited[n]=true;
	cout<<n<<" ";
	// check for adjacent Matrix
	for(i=0;i<adj[n].size();i++)
		if(visited[adj[n][i]]==false)
			DFS(adj[n][i],adj,visited);
	
}
int main()
{
	int i,j,k,ver=5,src,dest,n;

	cin>>n;
	vector<int>adj[ver];
	for(i=0;i<n;i++)
	{
		cin>>src>>dest;
		adj[src].push_back(dest);
		adj[dest].push_back(src);
	}
	vector<bool>visited(ver,false);
	for(i=0;i<ver;i++)
	{
		if(visited[i]==false)
			DFS(i,adj,visited);
	}
}

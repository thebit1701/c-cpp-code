#include<bits/stdc++.h>
#define max 100
int adj[max][max];
using namespace std;
int main()
{
	int n,type,origin,dest,maxedge;
	cout<<"enter no of vertices: ";
	cin>>n;
	int k=n*(n-1); // directed graph
	int j=(n*(n-1))/2;    // undirected  graph;
	cout<<"enter 1 for directed graph 2 for undirected: ";
	cin>>type;
	if(type==1)
		maxedge=k;
	else
		maxedge=j;
	for(int i=1;i<=maxedge;i++)
	{
		cout<<"enter origin and dest "<<i<<" :";
		cin>>origin>>dest;
		if(origin==-1 || dest==-1)
			break;
		if(origin>=n || dest>=n || origin<0 || dest<0){  // 4>=6 ||6>=6
		cout<<"invalid vertex";
		i--;
		}
		else{
			adj[origin][dest]=1;
			if(type==2)
			adj[dest][origin]=1;// for undirected
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<adj[i][j]<<"  ";
			
		}
		cout<<endl;
	}
}


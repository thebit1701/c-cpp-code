#include<bits/stdc++.h>
using namespace std;
 //                    GRAPH USING STL FOR REPRESENTATION USING ADJACENCY LIST  UNweighted graph
int main()
{
	
	int i,n,k,src,dest,j,x,ver=5;
	cin>>n;
	vector<int>list[ver];
	vector<int>::iterator it;
	for(i=0;i<n;i++)
	{
		cin>>src>>dest;
		list[src].push_back(dest);
		list[dest].push_back(src);
	}
	for (i = 0; i < ver; i++) 
    { 
        cout << "\n Adjacency list of vertex "
             << i << "\n head "; 
        for (auto x::list[i]) 
           cout << "-> " << x; 
        cout<<endl; 
    } 
}

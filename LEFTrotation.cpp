#include<bits/stdc++.h>
using namespace std;
// left rotation
int main()
{
	int m,i,k,n,t,arr[10000];
	cin>>n>>k;
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	m=k%n;
	for(i=0;i<n;i++)
	{
		cout<<arr[(m+i)%n]<<" ";
	}
}

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll i,t,n,l,j;
	int arr[100][100];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++){
			for(j=0;j<=i;j++)
			{
				cin>>arr[i][j];
			}
	}
	for(i=n-1;i>=0;i--)// 2
		for(j=0;j<=i;j++)//2
				if(arr[i][j]>arr[i][j+1]) //    3>
					arr[i-1][j]=arr[i-1][j]+arr[i][j];
				else
					arr[i-1][j]=arr[i-1][j]+arr[i][j+1];
	
		cout<<arr[0][0];
		
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,l,count=0,t,p=0;
	int arr[100000],k[100000]={0};
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin>>arr[i];
		//sort(arr,arr+n);
		// pick one by one element
		for(i=0;i<n-1;i++)
		{
			count=0;
			// compare with each element
			for(int j=0;j<n;j++)  
			{
				if(arr[j]>arr[i])
					count++;
			}
				k[i]=count;
		}
	for(int i=0;i<n;i++)
	cout<<k[i]<<" ";
	cout<<endl;
//	p=0;
	
	}
}

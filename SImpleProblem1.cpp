#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;
int main()
{
	ll t,n,count=1,max=1,i,k;
	int arr[100000];
	cin>>t;
	while(t--)
	{
		max=1;count=1;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(i=0;i<n;i++)
		{
			
				if(arr[i]>=arr[i-1])
					count++;
				else
				{
					if(max<count)
						max=count;
		
					count=1;
				}
		}
		if(max<count)
			max=count;
		cout<<max<<endl;
		
	}
}


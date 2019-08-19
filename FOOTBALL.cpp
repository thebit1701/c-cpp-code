#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,max,t,n,a[100000],b[100000];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for( i=0;i<n;i++)
		cin>>a[i];
		for( i=0;i<n;i++)
		cin>>b[i];
		for( i=0;i<n;i++)
		{
				a[i]=a[i]*20-b[i]*10;
				if(a[i]<0)
				a[i]=0;
		
		}
		 max=a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]>max)
			max=a[i];
			
		}
		cout<<max<<endl;
	}
}

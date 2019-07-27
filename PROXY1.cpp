#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i ,t,r,c=0,k=0,m;
	 float j,n;
	cin>>t;
	while(t!=0)
	{
		cin>>n;
		char arr[100000];
		for(i=0;i<n;i++)
		cin>>arr[i];
		for(i=0;i<n;i++)
		{
			if(arr[i]=='P')
			c++;
		}
		int y=c;
		j=n*0.75;
		long long int Z=ceil(j);
			r=Z-y;
		m=r;
		//cout<<r<<"Z= "<<Z;
		
		for(i=2;i<n-2;i++)
		{
			if(arr[i]=='P')
			continue;
			if((arr[i-1]=='P'||arr[i-2]=='P') &&(arr[i+1]=='P'||arr[i+2]=='P'))
			{
				
				k++;
				}
			if(k==r)
			break;
			else continue;
	
	}
	if(k==m  && k!=0 && m!=0)
		cout<<k<<endl;
	else if(k==0 )
	cout<<-1<<endl;	
	else if(k!=m)
	cout<<-1<<endl;
	
		k=0;j=0,m=0,r=0,y=0,Z=0,c=0;
		t--;
	}
}

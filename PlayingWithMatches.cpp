#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,a,b,t,h,k=0,sum,c,count=0;
	int rem[100000];
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		sum=a+b;
		n=sum;
		while(n!=0)
		{
			rem[k++]=n%10;
			n=n/10;
		}
			//cout<<rem<<" ";
		for(i=0;i<k;i++){
		if(rem[i]==0)
			count=count+6;
		else if(rem[i]==1)
			count=count+2;
		else if(rem[i]==2)
			count=count+5;
		else if(rem[i]==3)
			count=count+5;
		else if(rem[i]==4)
			count=count+4;
		else if(rem[i]==5)
			count=count+5;
		else if(rem[i]==6)
			count=count+6;
		else if(rem[i]==7)
			count=count+3;
		else if(rem[i]==8)
			count=count+7;
		else if(rem[i]==9)
			count=count+6;
		}
		cout<<count<<endl;
		count=0;
		k=0;
		sum=0;
	}
	
}

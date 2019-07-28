#include<bits/stdc++.h>
using namespace std;
int checkReverse(int n)
{
		int i,rev=0;
		for(i=n;i>0;i=i/10)
		{
			rev=rev*10;
			rev=rev+(i%10);
			 
		}
		return rev;
		
	
}
int main()
{
	int i,t,n,l;
	int arr[10000];
	cin>>t;
	while(t--)
	{
		cin>>n;
		int k=checkReverse(n);
		if(k==n)
		cout<<"wins"<<endl;
		else
		cout<<"losses"<<endl;
	}
	return 0;
}

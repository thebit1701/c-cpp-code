#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,n,t,rev=0;
	cin>>t;
	while(t!=0)
	{
		cin>>n;
		for(i=n;i>0;i=i/10)
		{
			rev=rev*10;
			rev=rev+(i%10);
			 
		}
		cout<<rev<<endl;
		rev=0;
		
		t--;
	}
}

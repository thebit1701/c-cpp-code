#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t,a,b,c,n,k;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		k=a+b+c;
		if(k==180)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}

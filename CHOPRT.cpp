#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
int main()
{
	int a,b,t,n;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a>b)
			cout<<">"<<endl;
		else if(a<b)
			cout<<"<"<<endl;
		else
			cout<<"="<<endl;
			
	}
	return 0;
}

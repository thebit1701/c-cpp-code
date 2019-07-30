#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long unsigned int  q,p,k,price ,discount;
	double l;
	cin>>t;
	while(t--)
	{
		cin>>q>>p;
		l=q*p;
		if(q>1000)
			l=l-l*0.1;
		cout<<fixed<<setprecision(6)<<l<<endl;
		
	}
}

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
	if(num<=1)
	return false;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		return false;
	}
	return true;
}
int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
	isPrime(n)?cout<<"yes"<<endl:cout<<"no"<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n,t,j,k,l,m,o,num;
	cin>>t;
	int arr[]={1,2,5,10,50,100};
	while(t--)
	{
		cin>>n;
		num=0;
		for(k=6;k>=0;--k)
		{
			num+=n/arr[k];
			n=n%arr[k];
		}
		cout<<num<<endl;
	}
	return 0;
}

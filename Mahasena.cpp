#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,l;
	int arr[100];
		k=0;l=0;
	cin>>n;
	for(t=0;t<n;t++)
	cin>>arr[t];
	for(t=0;t<n;t++)
	{
		if(arr[t]%2==0)
		k++;
		else
		l++;
		
	}
	if(k>l)
	cout<<"READY FOR BATTLE"<<endl;
	else if(k==l)
	cout<<"NOT READY"<<endl;
	else
	cout<<"NOT READY"<<endl;
	
}

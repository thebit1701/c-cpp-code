#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
int gcd(int a, int b) 
{ 
	if (a == 0) 
		return b; 
	return gcd(b % a, a); 
} 
int findGCD(int arr[], int n) 
{ 
	int first = arr[0]; 
	for (int i = 1; i < n; i++) 
		first = gcd(arr[i], first); 

	return first; 
} 
int main()
{
	int t,a,b,c,n,k,i;
	int arr[50];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		cin>>arr[i];
		k=findGCD(arr,n);
		for(i=0;i<n;i++)
		{
			a=arr[i]/k;
			cout<<a<<" ";
			
		}
		cout<<endl;
	}
}

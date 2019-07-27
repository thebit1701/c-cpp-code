#include<bits/stdc++.h>
using namespace std;
int minChocalateDiff(int arr[],int n,int m)
{
	if(m>n)
	return -1;
	
	if(m==0 || n==0)
	return 0;
	
	sort(arr,arr+n);
	int min=INT_MAX;  //We usually assign a high value to MIN to compute minimum value in an array. 
	
	int first=0o;
	int last=0;
	for(int i=0;i+m-1<n;i++)
	{
		int diff=arr[i+m-1]-arr[i];
		
		if(diff<min)
		{
			min=diff;
			first=i;
			last=i+m-1;
		}
	}
	return (arr[last]-arr[first]);
		
}
int main()
{
	int n,m;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"no. of students ";
	cin>>m;
	cout<<"min difference of chocolates is "<<minChocalateDiff(arr,n,m);
}

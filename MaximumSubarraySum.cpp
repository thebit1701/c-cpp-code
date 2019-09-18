#include<bits/stdc++.h>
#include<climits> 
//                                  using KADANE ALGORITHM
using namespace std;
int main()
{
	long long int n,i,a,b,k,arr[10000];
	b=0;
	a=-2147483648.;
	cin>>n;
	
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
	{
		
		b=b+arr[i];
		if(a<b){
			a=b;
			k=a;
		}
		if(b<0)
			b=0;
		
	}
	cout<<"maximum subarray sum is: "<<k<<endl;
}

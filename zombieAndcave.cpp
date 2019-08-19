#include<bits/stdc++.h>
using namespace std;
bool areEqual(int l[], int j[], long long int n, long long int m) 
{
	if (n != m) 
		return false; 
	sort(l, l + n); 
	sort(j, j + m); 

	for (int i = 0; i < n; i++) 
		if (l[i] !=j[i]) 
			return false; 
	return true; 
} 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int i,t,j,k,n;
	 int h[100000],c[100000];
	cin>>t;
	while(t--){
	cin>>n;
	 int l[100000]={0};
	for(i=0;i<n;i++)
	cin>>c[i];  // radiation power
	for(i=0;i<n;i++)
	cin>>h[i];  // zombie health
	for(i=0;i<n;i++)
	{
		long long int lo,u;
		lo=i-c[i];
		if(lo<0)
			lo=0;
		else
			lo=i-c[i];
		
		u=i+c[i];
		if(u>n)
			u=n;
		else
			u=i+c[i];
		for(j=lo;j<=u;j++)
			l[j]=l[j]+1;
	}
	//for(i=0;i<n;i++)
	//cout<<l[i]<<" ";
	
	if(areEqual(l,h,n,n))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;

}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int i,t,j,n,m,k,l,r,c[10000],p[100000];
	cin>>t;
	while(t--)
	{
		int min=0,flag=0;
		cin>>n>>m>>k>>l>>r;
		for(i=0;i<n;i++)
			cin>>c[i]>>p[i];
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
			if(c[i]>(k+1))
				c[i]=c[i]-1;
			else if(c[i]<(k-1))
					c[i]=c[i]+1;
			else if(c[i]<=k+1&&c[i]>=k-1)
					c[i]=k;
				}
		if(c[i]>=l && c[i]<=r)
		{
			if(min==0)
				min=p[i];
			else if(min>p[i])
			min=p[i];
				
		}
		else
			flag++;
	}
	if(flag==n)
	cout<<"-1"<<endl;
	else
	cout<<min<<endl;
	min=0;
	}
}

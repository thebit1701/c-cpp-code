#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,j,rem[100000],k=0,l,flag;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>n;
		int h=n;
		while(h!=0)
		{
		rem[k++]=h%10;
		h=h/10;
		}
		sort(rem,rem+k);
		for(i=1;i<k;i++)
		{
			
			if((rem[i]-rem[i-1])==1){
				flag++;
			}
			else
				flag--;
		}
		if(flag==k-1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		k=0;
	}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,count=0,x;
	cin>>t;
	while(t!=0)
	{
		cin>>n;
		int sum = 0; 
		for (x = n; x > 0; x = x / 10) 
			sum = sum + x % 10;
		while(sum%10!=0)
		{
			sum++;
			count++;
		
		}
		cout<<n<<count<<endl;
		count=0;
		
		t--;
	}
}

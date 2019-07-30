#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,b,n;
	cin>>t;
	while(t--)
	{
		cin>>b;
		if(b==1 || b==2 ||b==3)
		cout<<"0"<<endl;
		
		else if(b%2==0)
		{
			int area=0.5*b*b;
			n=(area-b)/4;
			cout<<n<<endl;
		}
		else
		{
			b=b-1;
			int area=0.5*b*b;
			n=(area-b)/4;
			cout<<n<<endl;
		}
		
	}
	
}

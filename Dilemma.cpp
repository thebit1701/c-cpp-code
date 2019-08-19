#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,k=0;
	char str[1000];
	cin>>t;
	while(t--)
	{
		cin>>str;
		int l=strlen(str);
		//cout<<l;
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]=='1')
				k++;
		}
		//cout<<k<<endl;
		if(k%2==0)
		cout<<"LOSE"<<endl;
		else
		cout<<"WIN"<<endl;
		k=0;
	}
}

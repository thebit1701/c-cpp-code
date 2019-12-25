#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		string fn,sn;
		cin>>n;
		pair<string,string>name[n];
		map<string,int>freq;
		for(i=0;i<n;i++)
		{
			cin>>fn>>sn;
			name[i]=make_pair(fn,sn);
			freq[fn]++;
		}
		for(auto x:freq)
		{
			cout<<x.first<<" "<<x.second<<endl;
		}
	}
}

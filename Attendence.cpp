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
		for(i=0;i<n;i++)
		{
			if(freq[name[i].first]!=1)
				cout<<name[i].first<<" "<<name[i].second<<endl;
			else
				cout<<name[i].first<<endl;
		}
	//	for(auto x:freq)
	//	{
	//		cout<<x.first<<" "<<x.second<<endl;
	//	}
	}
}

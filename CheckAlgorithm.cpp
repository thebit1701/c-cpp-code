#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		vector<char> vec;
		vector<char>::iterator it;
		map<char,int> freq;
		cin>>str;
		for(int i=0;i<str.length();i++)
		{
			vec.push_back(str[i]);
			freq[str[i]]++;
		}
		
		for(auto x:freq)
		{
			cout<<x.first<<" ";
		}
		char a=vec[1];
		for(it=vec.begin();it!=vec.end();it++)
		cout<<*it;
	}
}

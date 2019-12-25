#include<bits/stdc++.h> 
using namespace std;

int max(int a, int b) 
{ 
	return (a > b)? a : b;
} 
 
int knapSack(int cap, int wt[], int val[], int n) 
{ 
int i, w; 
int K[n+1][cap+1];  
for (i = 0; i <= n; i++) 
{ 
	for (w = 0; w <= cap; w++) 
	{ 
		if (i==0 || w==0) 
			K[i][w] = 0; 
		else if (wt[i-1] <= w) 
				K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]); 
		else
				K[i][w] = K[i-1][w]; 
	} 
} 
for(i=0;i<=n;i++)
{
	for(w=0;w<=cap;w++)
	{
		cout<<K[i][w]<<" ";
	}
	cout<<endl;
}

return K[n][cap]; 
} 

int main() 
{ 
	int val[100000],wt[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>val[i];
	for(int i=0;i<n;i++)
		cin>>wt[i];  
	int cap;
	cin>>cap; 
	int result=knapSack(cap, wt, val, n); 
	cout<<result<<endl;
	return 0; 
} 


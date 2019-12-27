#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,t;
	cin>>t;
	while(t--)
	{
		int n,d,c=0,arr[10000],digit;
		cin>>n;
		digit=log10(n)+1;
			int k=digit-1;
		for(i=k;i>=0;i--)
		{
			arr[i]=n%10;
			n=n/10;
			
		}
		
		int freq=count(arr, arr + digit, 9);
		if(freq==1 && digit==1)
			cout<<"11"<<endl;
		else if(freq==digit){
			int mid=digit/2;
			arr[0]=1;
			arr[digit]=1;
		for(i=1;i<digit;i++)
			arr[i]=0;
		for(i=0;i<=digit;i++)
			cout<<arr[i];cout<<endl;
		}
		
		else if(digit%2==0)
		{
			int mid=digit/2;
			int s=mid-1;
			//cout<<mid<<endl;
			if(arr[mid-1]>arr[mid])
				arr[mid]=arr[mid-1];
			else
			{
				if(arr[mid-1]<9)
					arr[mid-1]++;
				else
				{
					arr[mid-2]++;
					arr[mid-1]=0;
				}
			}
			for(i=mid;i<digit;i++)
			{
				
				arr[i]=arr[s--];
			}
		
	for(i=0;i<digit;i++)
			cout<<arr[i];cout<<endl;
		}
		else{
			int mid=ceil(digit/2);
			int s=mid-1;
			if(arr[mid-1]>arr[mid+1])
			{
				for(i=mid+1;i<digit;i++)
					arr[i]=arr[s--];
			}
			else
			{
				if(arr[mid]<9)
					arr[mid]++;
				else{
					arr[mid]=0;
					arr[mid-1]++;
				}
			
			for(i=mid+1;i<digit;i++)
			{
				
				arr[i]=arr[s--];
			}
	}
			for(i=0;i<digit;i++)
			cout<<arr[i];cout<<endl;
		
		}
	}
}

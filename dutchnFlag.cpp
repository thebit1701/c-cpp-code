#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int low ,int high)
{
	int temp=arr[low];
	arr[low]=arr[high];
	arr[high]=temp;
}
void sort(int arr[],int n)
{
	int reader,low,high;
	reader=0;
	low=0;
	high=n-1;
	while(reader<=high)
	{
		if(arr[reader]==0)
		{
			swap(arr,reader,low);
			reader++;
			low++;
		}
		else if(arr[reader]==1)
		{
			reader++;
		}
		else if(arr[reader]==2)
		{
			swap(arr,reader,high);
			high--;
		}
		else{
			cout<<"wrong input";
			break;
		}
	}
	
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	cout<<"enter only 0's and 1's 2's only: ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,n);
	cout<<"\n\nafter sorting...\n\n";
	printArray(arr,n);
}

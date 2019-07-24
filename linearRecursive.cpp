#include<iostream>
using namespace std;
int recursiveLinear(int arr[],int low,int high,int key)
{
	if(high<low)
		return -1;
	if(arr[low]==key)
		return low;
	if(arr[high]==key)
		return high;
	
	return recursiveLinear(arr,low+1,high-1,key);
}
int main()
{
	int i,j,n,k,key,arr[20];
	cin>>n;
	cin>>key;
	for(i=0;i<n;i++)
	cin>>arr[i];
	k=recursiveLinear(arr,0,n-1,key);
	if(k!=-1)
		cout<<"element present at location "<<k+1;
	else
		cout<<"element is not present in this array";
}

    #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
    int i,j,k=0,l,t,n,h,min1,count,result[100000],max;
    int arr[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        
        for(i=0;i<n;i++)
        cin>>arr[i];
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                result[k++]=(abs(arr[j]-arr[i])+abs(j-i));
            }
        }
       // for(i=0;i<k;i++)
        //cout<<result[i]<<" ";
        max=result[0];
        for(i=1;i<k;i++)
        {
            if(result[i]>max)
                max=result[i];
        }
        cout<<max<<endl;
        k=0;
        
    
    }
}


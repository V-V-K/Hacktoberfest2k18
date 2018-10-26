#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int place(int arr[],int k,int i)
{
	for(int j=1;j<=k-1;j++)
	{
		if(arr[j]==i || abs(k-j)==abs(i-arr[j]))
		{
			return 0;
		}
	}	
	return 1;
}
void nqueen(int arr[],int k,int n)
{
	for(int i=1;i<=n;i++)
	{
		if(place(arr,k,i))
		{
			arr[k]=i;
			if(k==n)
			{
				for(int j=1;j<=n;j++)
				cout<<arr[j]<<"\t";
				cout<<"\n";
			}
			else	
				nqueen(arr,k+1,n);			
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n+1]={};
	nqueen(arr,1,n);
}

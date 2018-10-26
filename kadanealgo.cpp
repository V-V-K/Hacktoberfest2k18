#include<iostream>
using namespace std;
int func(int arr[],int n)
{
	int result=-100000;
	int maxnum=arr[0];
	int maximum=arr[0];
	for(int i=1;i<n;i++)
	{
		maxnum=max(maxnum,arr[i]);
		if(maximum<0)
			maximum=0;
		maximum+=arr[i];
		result=max(maximum,result);
	}
	return max(maxnum,result);
}
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<func(a,n)<<"\n";
		t--;
	}
}

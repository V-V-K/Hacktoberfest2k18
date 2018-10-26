#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
	queue <int> q;
	int arr[9][9];
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++)
			cin>>arr[i][j];
	int flag[9]={};
	q.push(0);
	while(q.size()!=0)
	{
		if(flag[q.front()]==0)
		{
			cout<<(char)('a'+q.front())<<"\t";
			flag[q.front()]=1;
			for(int j=0;j<9;j++)
			{
				if(arr[q.front()][j]==1)
				{
					if(flag[j]==0)
					{
						q.push(j);
					}
					}
			}
		}
		q.pop();
	}
	return 0;
}

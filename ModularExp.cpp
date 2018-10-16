#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define INF (long long)1e18
#define MINF (long long)-(1e18)
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
using namespace std;
void Arrdisp(int A[],int N)
{
	for(int i=0;i<N;i++)
		cout<<A[i]<<" ";
	cout<<endl;
}
void swap(ll &a,ll &b)
{
	a^=b;
	b^=a;
	a^=b;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll a,b,pow=1,ans=0;
		cin>>a>>b;
		while(a!=0||b!=0)
		{
			ans+=((a%10)+(b%10))%10*pow;
			pow*=10;
			a/=10;
			b/=10;
		}
		cout<<ans<<endl;
	}
}

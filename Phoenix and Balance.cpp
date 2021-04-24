#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n+1);
		int s=0;
		for(int i=1;i<n;i++)
		{
			v[i]=pow(2,i);
			s=s+v[i];
		}
		int x=pow(2,n);
		s=s+x;
		int g=0;
		for(int i=1;i<=n/2-1;i++)
		{
			x=x+v[i];
		}
		cout<<x-(s-x)<<"\n";
	}
	return 0;
}


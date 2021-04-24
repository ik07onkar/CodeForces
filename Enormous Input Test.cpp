#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll n, k, cnt = 0;
    cin>>n>>k;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%k==0)
            cnt++;
    }
    cout<<cnt;
    return 0;
}


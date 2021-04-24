#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, min1 = LONG_MAX;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++)
            cin>>a[i];
        for(ll i=0; i<n-1; i++)
            for(ll j=i+1; j<n; j++)
                min1 = min(min1,abs(a[i]-a[j]));
        cout<<min1<<"\n";
    }
    return 0;
}




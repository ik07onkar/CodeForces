#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, max1 = LONG_MIN;
        cin>>n;
        n *= 2;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            max1 = max(max1,a[i]);
        }
        ll h[max1+1];
        memset(h,0,sizeof(h));
        for(ll i=0; i<n; i++)
        {
            if(h[a[i]] == 0)
                cout<<a[i]<<" ";
            h[a[i]]++;
        }
        cout<<"\n";
    }
    return 0;
}


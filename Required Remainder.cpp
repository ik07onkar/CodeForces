#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x, y, n;
        cin>>x>>y>>n;
        cout<<(n - y) / x * x + y<<"\n";
    }
    return 0;
}



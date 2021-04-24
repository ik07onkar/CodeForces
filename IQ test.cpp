#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    vector<ll> odd,even;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            even.push_back(i+1);
        else
            odd.push_back(i+1);
    }
    if(even.size() == 1)
        cout<<even[0];
    else cout<<odd[0];
    return 0;
}

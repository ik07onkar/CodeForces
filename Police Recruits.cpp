#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, hired = 0, crime = 0;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++)
        cin>>a[i];
    for(ll i=0; i<n; i++)
    {
        if(a[i] == -1 && hired == 0)
            crime++;
        else if(a[i] == -1 && hired > 0)
            hired--;
        else hired += a[i];
    }
    cout<<crime;
    return 0;
}

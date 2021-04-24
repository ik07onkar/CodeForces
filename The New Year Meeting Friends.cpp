#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n = 3;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    sort(v.begin(), v.end());
    cout<<(v[1]-v[0]) + (v[2]-v[1]);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, max_till_now = 0, cnt = 0;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    for(ll i=0; i<n; i++)
    {
        max_till_now = max(max_till_now, cnt);
        if(a[i] <= a[i+1])
            cnt++;
        else
            cnt = 0;
    }
    cout<<max_till_now+1;
    return 0;
}


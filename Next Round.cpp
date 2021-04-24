#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    ll score_to_advace = a[k-1], cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] >= score_to_advace && a[i] > 0)
            cnt++;
    }
    cout<<cnt;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, max1 = LONG_MIN, cnt = 0;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        max1 = max(max1,a[i]);
    }
    if(n == 1)
        cout<<"0";
    else{
        for(int i=0; i<n; i++)
            cnt += (max1 - a[i]);
        cout<<cnt;
    }
    return 0;
}


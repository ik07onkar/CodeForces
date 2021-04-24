#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n/2020 >= n%2020)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, k, kids = 0;
        cin>>n>>k;
        ll a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            kids += a[i]/k;
        cout<<kids<<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, teams, x, y, z;
    cin>>n;
    ll a[n];
    ll h[4] = {0};
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        h[a[i]]++;
    }
    teams = min(min(h[1],h[2]),min(h[2],h[3]));
    cout<<teams<<"\n";
    while(teams--)
    {
        int f1 = 0, f2 = 0, f3 = 0;
        for(ll i=0; i<n; i++)
        {
            if(a[i] == 1 && f1 == 0)
            {
                x = i+1;
                a[i] = 0;
                f1 = 1;
            }
            else if(a[i] == 2 && f2 == 0)
            {
                y = i+1;
                a[i] = 0;
                f2 = 1;
            }
            else if(a[i] == 3 && f3 == 0)
            {
                z = i+1;
                a[i] = 0;
                f3 = 1;
            }
        }
        cout<<x<<" "<<y<<" "<<z<<"\n";
    }
    return 0;
}

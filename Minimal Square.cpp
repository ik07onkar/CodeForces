#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if(x<y)
            x *= 2;
        else
            y *= 2;
        cout<<pow(max(x,y),2)<<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,x;
    cin>>n>>x;
    if(n%2 == 0)
    {
        if(x <= n/2)
            cout<<(x*2)-1;
        else
        {
            x -= (n/2);
            cout<<x*2;
        }
    }
    else
    {
        if(x <= (n/2)+1)
            cout<<(x*2)-1;
        else
        {
            x -= (n/2)+1;
            cout<<x*2;
        }
    }
    return 0;
}



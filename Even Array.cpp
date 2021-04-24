#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, odd = 0, even = 0;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if((a[i]%2 != i%2)&&(a[i]%2==0))
                even++;
            else if((a[i]%2 != i%2)&&(a[i]%2==1))
                odd++;
        }
        (odd == even)?cout<<even:cout<<"-1";
        cout<<endl;
    }
    return 0;
}


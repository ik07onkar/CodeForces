#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(ceil(log2(n)) == floor(log2(n)))
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}

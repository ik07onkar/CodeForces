#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        ll n = a.size();
        if(n <=10)
            cout<<a<<"\n";
        else
            cout<<a[0]<<n-2<<a[n-1]<<"\n";
    }
    return 0;
}

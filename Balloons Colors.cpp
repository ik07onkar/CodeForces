#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        ll a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        if(x == a[0] && y == a[n-1])
            cout<<"BOTH\n";
        else if(x == a[0] && y != a[n-1])
            cout<<"EASY\n";
        else if(x != a[0] && y == a[n-1])
            cout<<"HARD\n";
        else
            cout<<"OKAY\n";
    }
    return 0;
}


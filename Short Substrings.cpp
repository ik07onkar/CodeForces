#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        vector<char> v;
        v.push_back(a[0]);
        for(ll i=1; i<a.size(); i+=2)
            v.push_back(a[i]);
        for(ll i=0; i<v.size(); i++)
            cout<<v[i];
        cout<<endl;
    }
    return 0;
}



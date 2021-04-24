#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    string a;
    cin>>a;
    int l = 0, d = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == 'D')
            d++;
        if(a[i] == 'A')
            l++;
    }
    if(d == l)
        cout<<"Friendship";
    else if(d > l)
        cout<<"Danik";
    else
        cout<<"Anton";
    return 0;
}




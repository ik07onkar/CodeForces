#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int h[5];
    memset(h,0,sizeof(h));
    ll n, cnt = 0, r = 0;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        h[a[i]]++;
    }

    cnt += h[4];

    r = min(h[3], h[1]);
    cnt += r;
    h[3] -= r;
    h[1] -= r;

    if(h[3]) cnt += h[3];

    cnt += h[2]/2;

    cnt += h[1]/4;

    h[1] -= (h[1]/4)*4;

    cnt += ((h[2]%2 + h[1])==4)?2:((h[2]%2 + h[1])==0)?0:1;

    cout<<cnt;
    return 0;
}

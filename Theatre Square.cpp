#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m,a,cnt=0;
    cin>>n>>m>>a;
    while(n > a)
    {
        cnt += (m/a);
        if(m%a != 0)
            cnt++;
        n -= a;
    }
    cnt += m/a;
    if(m%a != 0)
        cnt++;
    cout<<cnt;
    return 0;
}


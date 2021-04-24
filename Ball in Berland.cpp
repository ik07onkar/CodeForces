#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, m, k, cnt = 0;
        cin>>n>>m>>k;
        int a[k], b[k], cnt1[n+1]={0}, cnt2[m+1]={0};
        for(ll i=0; i<k; i++)
        {
            cin>>a[i];
            cnt1[a[i]]++;
        }
        for(ll i=0; i<k; i++)
        {
            cin>>b[i];
            cnt2[b[i]]++;
        }
        for(int i=0; i<k; i++)
        {
            cnt += k - (cnt1[a[i]] + cnt2[b[i]]) + 1;
        }
        cout<<cnt/2<<"\n";
    }
    return 0;
}


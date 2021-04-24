#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k, cnt = 0, sum = 0;
    cin>>n>>k;
    k = 240 - k;
    for(int i=0; i<n; i++)
    {
        cnt += 5;
        sum += cnt;
        if(sum > k)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<n;
    return 0;
}





















































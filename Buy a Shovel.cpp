#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, r, ans, i = 1;
    cin>>n>>r;
    while(1)
    {
        ans = n * i;
        if(ans%10 == 0 || ans%10 == r)
            break;
        else
            i++;
    }
    cout<<i;
    return 0;
}

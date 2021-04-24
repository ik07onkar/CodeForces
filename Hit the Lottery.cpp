#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a[5] = {100,20,10,5,1};
    ll n, cnt  = 0;
    cin>>n;
    for(int i=0; i<5; i++)
    {
        cnt += n/a[i];
        n %= a[i];
    }
    cout<<cnt;
    return 0;
}

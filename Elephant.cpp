#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, cnt = 0;
    cin>>n;
    for(int i=0; i<n; i+=5)
        cnt++;
    cout<<cnt;
    return 0;
}

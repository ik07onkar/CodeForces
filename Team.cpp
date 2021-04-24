#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t, cnt = 0;
    cin>>t;
    while(t--)
    {
        int x, y, z, sum;
        cin>>x>>y>>z;
        sum = x+y+z;
        if(sum >= 2)
            cnt++;
    }
    cout<<cnt;
    return 0;
}

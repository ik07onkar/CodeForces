#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, tmp = 0, max1 = 0;
    cin>>n;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        tmp -= x;
        tmp += y;
        max1 = max(max1,tmp);
    }
    cout<<max1;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, cnt = 0;
    cin>>n;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        if(y-x >= 2)
            cnt++;
    }
    cout<<cnt;
    return 0;
}


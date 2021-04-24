#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a[4], cnt = 0;
    for(int i=0; i<4; i++)
        cin>>a[i];
    for(int i=0; i<4-1; i++)
    {
        int fg = 0;
        for(int j=i+1; j<4; j++)
        {
            if(a[i] == a[j] && a[i] != 0)
            {
                fg++;
                a[j] = 0;
            }
        }
        cnt += fg;
    }
    cout<<cnt;
    return 0;
}



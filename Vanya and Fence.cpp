#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, h, cnt = 0;
    cin>>n>>h;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] > h)
            cnt+=2;
        else
            cnt++;
    }
    cout<<cnt;
    return 0;
}

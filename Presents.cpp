#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    int a[n], ans[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        ans[a[i]-1] = i+1;
    }
    for(int i=0; i<n; i++)
        cout<<ans[i]<<" ";
    return 0;
}


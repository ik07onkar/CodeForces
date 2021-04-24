#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, max1 = 0, cnt = 0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            max1 = max(max1,a[i]);
        }
        sort(a,a+n);
        for(int i=0; i<n-1; i++)
        {
            if(abs(a[i]-a[i+1]) != 1 && abs(a[i]-a[i+1]) != 0)
                cnt++;
        }
        (cnt > 0)?cout<<"NO\n":cout<<"YES\n";
    }
    return 0;
}


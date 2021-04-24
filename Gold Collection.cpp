#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=1; i<n; i++)
            a[i] += a[i-1];
        cin>>q;
        while(q--)
        {
            int q1,q2;
            cin>>q1>>q2;
            if(q1 == 1)
                cout<<a[q2-1]<<"\n";
            else
                cout<<a[q2-1]-a[q1-2]<<"\n";
        }
    }
    return 0;
}





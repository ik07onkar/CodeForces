#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int cnt = 0;
        int max1=INT_MIN, min1=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            max1 = max(a[i], a[i+1]);
            min1 = min(a[i], a[i+1]);
            while(max1 > 2 * min1)
            {
                cnt++;
                min1 *= 2;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, cnt = 0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int min1 = a[0], max1 = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i] < min1)
        {
            cnt++;
            min1 = a[i];
        }
        else if(a[i] >max1)
        {
            cnt++;
            max1 = a[i];
        }
    }
    cout<<cnt;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, cnt = 0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] == 0 && a[j] == 0)
                cnt++;
            else if(a[i] < 0 && abs(a[i]) == a[j])
                cnt++;
            else if(a[i] > 0 && -1*a[i] == a[j])
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
}





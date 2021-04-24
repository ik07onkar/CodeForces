#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, max1 = 0, max2 = 0;
    cin>>n;
    int p1;
    cin>>p1;
    int p[p1];
    for(int i=0; i<p1; i++)
    {
        cin>>p[i];
        max1 = max(max1,p[i]);
    }
    int q1;
    cin>>q1;
    int q[q1];
    for(int i=0; i<q1; i++)
    {
        cin>>q[i];
        max2 = max(max2,q[i]);
    }
    int h[n+1]={0};
    for(int i=0; i<p1; i++)
        h[p[i]]++;
    for(int i=0; i<q1; i++)
        h[q[i]]++;
    for(int i=1; i<n+1; i++)
    {
        if(h[i] == 0)
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}

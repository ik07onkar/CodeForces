#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, cnt=0;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0; i<n-1; i++)
    {
        if(a[i] == a[i+1])
            cnt++;
    }
    cout<<cnt;
    return 0;
}

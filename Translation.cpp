#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a,b;
    cin>>a>>b;
    int n = a.size(), m = b.size(), s = 0, l = n-1;
    if(n != m)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        if(a[s++] != b[l--])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}



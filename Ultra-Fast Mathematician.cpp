#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a,b;
    cin>>a>>b;
    int n = a.size();
    for(int i=0; i<n; i++)
    {
        if(a[i] != b[i])
            a[i] = '1';
        else
            a[i] = '0';
    }
    cout<<a;
    return 0;
}



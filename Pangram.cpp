#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, cnt = 0;
    cin>>n;
    string a;
    cin>>a;
    int h[26];
    memset(h,0,sizeof(h));
    for(int i=0; i<n; i++)
    {
        if(a[i] >= 97 && a[i] <= 122)
            h[a[i]-'a']++;
        if(a[i] >= 65 && a[i] <= 90)
            h[a[i]-'A']++;
    }
    for(int i=0; i<26; i++)
    {
        if(h[i] == 0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}


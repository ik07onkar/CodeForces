#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;
    getline(cin,a);
    int n = a.size(), cnt = 0;
    int h[26];
    memset(h,0,sizeof(h));
    for(int i=0; i<n; i++)
        if(a[i] >= 97 && a[i] <= 122)
            h[a[i]-'a']++;
    for(int i=0; i<26; i++)
        if(h[i] >= 1)
            cnt++;
    cout<<cnt;
    return 0;
}

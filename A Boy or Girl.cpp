#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;
    cin>>a;
    int n = a.size(), cnt=0;
    int h[26];
    memset(h,0,sizeof(h));
    for(int i=0; i<n; i++)
        h[a[i]-'a']++;
    for(int i=0; i<26; i++)
        if(h[i] > 0)
            cnt++;
    (cnt % 2 == 0)?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";
    return 0;
}


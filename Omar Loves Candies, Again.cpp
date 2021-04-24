#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int h[26], n = a.size(), max1 = 0;
        memset(h,0,sizeof(h));
        char candy;
        for(int i=0; i<n; i++)
            h[a[i]-'a']++;
        for(int i=0; i<26; i++)
        {
            if(h[i] > max1)
            {
                max1 = h[i];
                candy = char(i + 'a');
            }
        }
        cout<<max1<<" "<<candy<<"\n";
    }
    return 0;
}



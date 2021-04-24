#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll max1 = 0, cnt = 0;
        string s;
        cin>>s;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i] == '<')
                cnt++;
            else{
                cnt--;
                if(cnt < 0)
                    break;
            }
            if(cnt == 0)
                max1 = i+1;
        }
        cout<<max1<<"\n";
    }
    return 0;
}

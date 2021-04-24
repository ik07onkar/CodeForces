#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag = 0;
        ll x, tmp;
        cin>>x;
        int start = 1, last = 1;
        while(pow(start,3)+pow(last,3) <= x)
        {
            if(pow(start,3)+pow(last,3) == x)
            {
                flag = 1;
                break;
            }
            else if(pow(start+1,3)+pow(last+1,3) < x)
            {
                start++;
                last++;
            }
            else
                start++;
        }
        (flag==1)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, tmp1, cnt = 0;
        cin>>x;
        while(x != 0)
        {
            cnt = (10*cnt) + (x%10);
            x /= 10;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}

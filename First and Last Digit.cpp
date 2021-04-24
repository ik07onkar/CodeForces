#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, tmp1, tmp2;
        cin>>x;
        tmp2 = x%10;
        while(x != 0)
        {
            tmp1 = x;
            x /= 10;
        }
        cout<<tmp1+tmp2<<"\n";
    }
    return 0;
}





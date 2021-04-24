#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if((abs(a-b))%10 == 0)
            cout<<(abs(a-b))/10<<"\n";
        else
            cout<<((abs(a-b))/10)+1<<"\n";
    }
    return 0;
}

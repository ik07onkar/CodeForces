#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int x;
    float n;
    cin>>x>>n;
    if(x <= n-0.5 && x%5 == 0)
    {
        n =n-x;
        n -= 0.5;
        cout<<fixed<<setprecision(2)<<n;
    }
    else
        cout<<fixed<<setprecision(2)<<n;
    return 0;
}

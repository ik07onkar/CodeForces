#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a, b, c, max1 = LONG_MIN;
    cin>>a>>b>>c;
    max1 = max(max1, (a+b)*c);
    max1 = max(max1, (a*b)+c);
    max1 = max(max1, a*b*c);
    max1 = max(max1, a+b+c);
    max1 = max(max1, a*(b+c));
    cout<<max1;
    return 0;
}


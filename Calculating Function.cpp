#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, cnt = 0;
    cin>>n;
    ll n1, n2;
    if(n%2==0)
    {
        n1 = n/2;
        n2 = n/2;
    }
    else
    {
        n1 = (n/2)+1;
        n2 = n/2;
    }
    n1 =  ((n1*2)+(((n1*n1)-n1)*2))/2;
    n2 =  ((n2*4)+(((n2*n2)-n2)*2))/2;
    cout<<n2-n1;
    return 0;
}


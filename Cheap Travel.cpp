#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    ll case1 = n*a;
    ll case2 = LONG_MAX;
    if(m>=n){
        case2 = b;
    }
    ll case3 = LONG_MAX;
    ll flg=n/m;
    flg *= b;
    ll remain = n%m;
    remain = min(remain*a, b);
    case3 = flg+remain;
    cout<<min(case1,min(case2,case3))<<"\n";
    return 0;
}

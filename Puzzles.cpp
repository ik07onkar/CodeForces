#include<bits/stdc++.h>
using namespace std;
#define ll long long

template<typename T>
vector<T> slicing(vector<T> const &v, ll m, ll n) {
   auto first = v.begin() + m;
   auto last = v.begin() + n + 1;
   vector<T> vector(first, last);
   return vector;
}

int main()
{
    ll st, n, min1 = LONG_MAX;
    cin>>st>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++)
        cin>>a[i];
    sort(a.begin(), a.end());
    ll lp = (n-st)+1;
    ll i = 0, j = st-1;
    while(j != n)
    {
        vector<ll> sub_vector = slicing(a, i, j);
        ll maxx = *max_element(sub_vector.begin(), sub_vector.end());
        ll minn = *min_element(sub_vector.begin(), sub_vector.end());
        min1 = min(min1, (maxx-minn));
        i++;
        j++;
    }
    cout<<min1;
    return 0;
}

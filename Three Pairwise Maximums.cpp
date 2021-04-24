#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int x, y, z;
		cin>>x>>y>>z;
		vector<int> tpl;
		tpl.push_back(x), tpl.push_back(y), tpl.push_back(z);
		sort(tpl.begin(), tpl.end());
		if (tpl[2] == tpl[1]) {
			cout << "YES" << endl;
			cout << tpl[2] << " " << tpl[0] <<" "<< tpl[0]<<endl;
		}
		else {
			cout << "NO" << endl;
		}
    }
    return 0;
}



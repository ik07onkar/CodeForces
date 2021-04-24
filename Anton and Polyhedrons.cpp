#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    vector<pair<string,int>> v;
    v.push_back(make_pair("Tetrahedron",4));
    v.push_back(make_pair("Cube",6));
    v.push_back(make_pair("Octahedron",8));
    v.push_back(make_pair("Dodecahedron",12));
    v.push_back(make_pair("Icosahedron",20));
    int n, cnt = 0;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        for(int i=0; i<v.size(); i++)
        {
            if(a == v[i].first)
                cnt += v[i].second;
        }
    }
    cout<<cnt;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;
    cin>>a;
    int n = a.size(), flag = 0;
    vector<char> v;
    for(int i=0; i<n; i++)
    {
        if(a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B' && flag == 1)
        {
            v.push_back(' ');
            i += 2;
        }
        else if(a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B')
        {
            i += 2;
        }
        else
        {
            v.push_back(a[i]);
            flag = 1;
        }
    }
    for(int i=0; i<v.size(); i++)
        cout<<v[i];
    return 0;
}


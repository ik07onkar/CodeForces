#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;
    cin>>a;
    int n = a.size(), cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == a[i+1])
        {
            cnt++;
            if(cnt == 6)
            {
                cout<<"YES";
                return 0;
            }
        }
        if(a[i] != a[i+1])
            cnt = 0;
    }
    cout<<"NO";
    return 0;
}


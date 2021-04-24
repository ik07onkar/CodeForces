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
        if(a[i] == '4' || a[i] == '7')
            cnt++;
    }
    (cnt == 7 || cnt == 4)?cout<<"YES":cout<<"NO";
    return 0;
}


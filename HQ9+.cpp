#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;
    cin>>a;
    int n = a.size();
    for(int i=0; i<n; i++)
    {
        if(a[i] == 'H' || a[i] == 'Q' || a[i] == '9')
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}


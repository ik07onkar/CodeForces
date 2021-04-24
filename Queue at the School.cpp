#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, t;
    string a;
    cin>>n>>t;
    cin>>a;
    char tmp;
    while(t--)
    {
        for(int i=0; i<n-1; i++)
        {
            if(a[i] == 'B' && a[i+1] == 'G')
            {
                tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
                i++;
            }
        }
    }
    cout<<a;
    return 0;
}


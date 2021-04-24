#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;
    cin>>a;
    char tmp;
    int n = a.size();
    for(int i=0; i<n-1; i+=2)
    {
        for(int j=0; j<n-i-1; j+=2)
        {
            if(a[j] > a[j+2])
            {
                tmp = a[j];
                a[j] = a[j+2];
                a[j+2] = tmp;
            }
        }
    }
    cout<<a;
    return 0;
}




#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a ;
    int n = a.size(), upper = 0, lower = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] >= 65 && a[i] <= 90)
            upper++;
        if(a[i] >= 97 && a[i] <= 122)
            lower++;
    }
    if(lower >= upper)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i] >= 65 && a[i] <= 90)
                a[i] = a[i] + 32;
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(a[i] >= 97 && a[i] <= 122)
                a[i] = a[i] - 32;
        }
    }
    cout<<a;
    return 0;
}


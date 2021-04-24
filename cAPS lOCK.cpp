#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;
    cin>>a;
    int n = a.size();
    if(n == 1 && (a[0] >=97 && a[0] <= 122))
    {
        cout<<char(a[0]-32);
        return 0;
    }
    int flag = 1;
    for(int i=1; i<n; i++)
    {
        if(a[i] >= 97 && a[i] <= 122)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i] >= 97 && a[i] <= 122)
                a[i] -= 32;
            else
                a[i] += 32;
        }
        cout<<a;
        return 0;
    }
    cout<<a;
    return 0;
}




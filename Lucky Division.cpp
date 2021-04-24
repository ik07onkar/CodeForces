#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[14] = {4,7,44,47,77,74,777,444,774,447,747,474,744,477};
    int n;
    cin>>n;
    for(int i=0; i<14; i++)
    {
        if(n%a[i] == 0)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}

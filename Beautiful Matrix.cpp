#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a[5][5], ans = 0, l, r;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 1)
            {
                l = i;
                r = j;
            }
        }
    }
    cout<<(abs(2-l)+abs(2-r));
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, wanted_money, cnt = 0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    sort(a, a+n, greater<int>());
    wanted_money = (sum/2)+1;
    sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += a[i];
        cnt++;
        if(sum >= wanted_money)
            break;
    }
    cout<<cnt;
    return 0;
}



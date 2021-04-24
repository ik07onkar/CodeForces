#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int min1_index = 101, min1 = 101, max1_index = -1, max1 = -1, start = 0, last = n-1, cnt = 0;
    while(start <= n-1)
    {
        if(a[start] > max1)
        {
            max1 = a[start];
            max1_index = start;
        }
        start++;
    }
    while(last >= 0)
    {
        if(a[last] < min1)
        {
            min1 = a[last];
            min1_index = last;
        }
        last--;
    }
    cnt += (max1_index < min1_index)?max1_index+abs(min1_index - (n -1)):max1_index+abs(min1_index - (n -1))-1;
    cout<<cnt;
    return 0;
}




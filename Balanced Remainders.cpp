#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, cnt = 0, diff;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int index[3];
        memset(index,0,sizeof(index));
        for(int i=0; i<n; i++)
            index[a[i]%3]++;
        while(index[0] != index[1] || index[1] != index[2])
        {
            for(int i=0; i<3; i++)
            {
                if(index[i] > n/3)
                {
                    diff = index[i] - (n/3);
                    index[(i+1)%3] += diff;
                    cnt += diff;
                    index[i] -= diff;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int x, tmp_x, mod, flag;
    cin>>x;
    do{
        flag = 0;
        x++;
        tmp_x = x;
        int a[4];
        for(int i=0; i<4; i++)
        {
            a[i] = tmp_x%10;
            tmp_x /= 10;
        }
        int h[10];
        memset(h,0,sizeof(h));
        for(int i=0; i<4; i++)
            h[a[i]]++;
        for(int i=0; i<10; i++)
        {
            if(h[i] > 1)
            {
                flag = 1;
                break;
            }
        }
        if(flag != 1)
            cout<<x;
    }while(flag == 1);
    return 0;
}

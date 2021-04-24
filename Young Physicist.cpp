#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, x_cord = 0, y_cord = 0, z_cord = 0;
    cin>>n;
    while(n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        x_cord += x;
        y_cord += y;
        z_cord += z;
    }
    if(x_cord == 0 && y_cord == 0 && z_cord == 0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t, x = 0;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        if(a == "++X")
            ++x;
        if(a == "X++")
            x++;
        if(a == "--X")
            --x;
        if(a == "X--")
            x--;
    }
    cout<<x;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int Limak, bob, cnt = 0;
    cin>>Limak>>bob;
    while(Limak <= bob)
    {
        cnt++;
        Limak *= 3;
        bob *= 2;
    }
    cout<<cnt;
    return 0;
}

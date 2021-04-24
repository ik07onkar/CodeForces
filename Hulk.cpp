#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    string a = "that I love ";
    string b = "that I hate ";
    cin>>n;
    cout<<"I hate ";
    for(int i=1; i<n; i++)
    {
        if(i%2 == 1)
            cout<<a;
        else
            cout<<b;
    }
    cout<<"it";
    return 0;
}

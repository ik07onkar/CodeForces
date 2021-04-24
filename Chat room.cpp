#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;
    cin>>a;
    int n = a.size(), cnt = 0, j = 0, i = 0, flag;
    char c[5] = {'h','e','l','l','o'};
    do
    {
        flag = 0;
        while(j < n)
        {
            if(a[j] == c[i])
            {
                cnt++;
                i++;
                j++;
                break;
            }
            j++;
        }
    }while(j<n);
    (cnt==5)?cout<<"YES":cout<<"NO";
    return 0;
}

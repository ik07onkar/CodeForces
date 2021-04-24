#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int n = a.size(), j = 0;
    char b[1000];
    for(int i=0; i<n; i++)
    {
        if((a[i] != 'a' && a[i] != 'e'&& a[i] != 'i'&& a[i] != 'o'&& a[i] != 'u'&& a[i] != 'y') && (a[i] != 'A' && a[i] != 'E'&& a[i] != 'I'&& a[i] != 'O'&& a[i] != 'U'&& a[i] != 'Y'))
        {
            if(a[i] >= 65 && a[i] <= 90)
                a[i] += 32;
            b[j++] = '.';
            b[j++] = a[i];
        }
    }
    int m = 0;
    for(int i=0; i<j; i++)
    {
        if(b[i] == '.' ||(b[i] >= 90 && b[i] <= 122))
            m++;
    }
    for(int i=0; i<m; i++)
        cout<<b[i];
    return 0;
}

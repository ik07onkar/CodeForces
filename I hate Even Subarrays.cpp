#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int top = -1;
        vector<char> ch;
        for(int i=0; i<a.size(); i++)
        {
            if(top == -1)
            {
                ch.push_back(a[i]);
                top++;
            }
            else
            {
                if(a[i] == ch[top])
                {
                    ch.pop_back();
                    top--;
                }
                else
                {
                    ch.push_back(a[i]);
                    top++;
                }
            }
        }
        if(top == -1)
            cout<<"KHALI";
        else
        {
            for(int i=0; i<ch.size(); i++)
                cout<<ch[i];
        }
        cout<<"\n";
    }
    return 0;
}

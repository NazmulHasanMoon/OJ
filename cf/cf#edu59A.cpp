#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    int q,n;
    string s;
    cin>>q;
    while(q--)
    {
        cin>>n>>s;
        if(n==2)
        {
            if(s[0]<s[1])
                cout<<"YES\n2\n"<<s[0]<<' '<<s[1]<<'\n';
            else
                cout<<"NO"<<'\n';
        }
        else
        {
            cout<<"YES\n2\n"<<s[0]<<' ';
            for(int i=1;i<n;i++)
                cout<<s[i];
            cout<<'\n';
        }
    }
    return 0;
}

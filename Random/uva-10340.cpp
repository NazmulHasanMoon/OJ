#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,t;
    int i,l,j,m;
    while(cin>>s>>t)
    {
        l=s.size();
        m=t.size();
        if(l>m)
            cout<<"No\n";
        else
        {
            for(i=0,j=0; i<m&&j<l; i++)
            {
                if(t[i]==s[j])
                    j++;
            }
            if(j==l)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    return 0;
}

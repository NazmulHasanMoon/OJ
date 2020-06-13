#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x>>y;
        string s[n];
        int ans=0;
        for(int i=0; i<n; i++)
            cin>>s[i];
        if(y<x+x)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if(s[i][j]=='.')
                    {
                        if(j+1<m&&s[i][j+1]=='.')
                            ans+=y;
                        else
                            ans+=x;
                        j++;
                    }
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(s[i][j]=='.')
                        ans+=x;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}

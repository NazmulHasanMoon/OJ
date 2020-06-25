#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz 2005
#define sf scanf
#define pf printf
char c[sz][sz];

int main()
{
    int n,m,k;
    ll s(0);
    sf("%d %d %d",&n,&m,&k);
    getchar();
    for(int i=0; i<n; i++)
        sf("%s",c[i]);
    for(int i=0; i<n; i++)
    {
        int mn=1;
        for(int j=0; j<m-1; j++)
        {
            if(c[i][j+1]=='.'&&c[i][j]=='.')
                mn++;
            else if(c[i][j]=='.'&&c[i][j+1]!='.')
            {
                ll x=(ll)mn-(ll)k;
                s+=((x>=0)?x+1:0);
                mn=1;
            }
        }
        if(c[i][m-1]=='.')
        {
            ll x=(ll)mn-(ll)k;
            s+=((x>=0)?x+1:0);
        }
       // cout<<s<<endl;
    }
    if(k!=1)
    {
        for(int i=0; i<m; i++)
        {
            int mn=1;
            for(int j=0; j<n-1; j++)
            {
                if(c[j+1][i]=='.'&&c[j][i]=='.')
                    mn++;
                else if(c[j][i]=='.'&&c[j+1][i]!='.')
                {
                    ll x=(ll)mn-(ll)k;
                    s+=((x>=0)?x+1:0);
                    mn=1;
                }
            }
            if(c[n-1][i]=='.')
            {
                ll x=(ll)mn-(ll)k;
                s+=((x>=0)?x+1:0);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int x,t,n,z,k(1),sz(5002),ss(101);
    int m[ss][sz],w[ss],v[ss];
    sf("%d",&t);
    while(k<=t)
    {
        sf("%d",&n);
        int s(0);
        for(int j=1;j<=n;j++)
        {
            sf("%d",&v[j]);
            v[j]=abs(v[j]);
            s+=v[j];
            w[j]=v[j];
        }
        x=s;
        s/=2;
        //cout<<s<<"*\n";
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=s; j++)
            {
                if(w[i]>j)
                    m[i][j]=m[i-1][j];
                else
                    m[i][j]=max(v[i]+m[i-1][j-w[i]],m[i-1][j]);
                //cout<<m[i][j]<<' ';
            }
            //cout<<endl;
        }
        //cout<<m[n][s]<<"*"<<x<<endl;

        if(m[n][s]!=(x-m[n][s]))
            pf("Case %d: no\n",k);
        else
            pf("Case %d: yes\n",k);
        k++;
    }
    //cout<<m[n][x]<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define sz 1005
int a[sz],b[sz];
int main()
{
    int n,k,kk;
    vector<pair<int,pair<int,int> > >d;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k>>kk;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        cin>>b[i];
    for(int i=0; i<n; i++)
        d.push_back({abs(a[i]-b[i]),{a[i],b[i]}});
    sort(d.begin(),d.end());
    long long x(0);
    if(n>1)
    {
        while(k||kk)
        {
            for(int i=n-1; i>=1&&(k||kk); i--)
            {
                if(d[i].ss.ff==d[i].ss.ss&&k&&kk)
                {
                    k--,k--;

                }
                else if(d[i].ss.ff>d[i].ss.ss&&(k||kk))
                {
                    if(k)
                    {
                        d[i].ss.ff--;
                        k--;
                    }
                    else
                    {
                        d[i].ss.ss++;
                        kk--;
                    }
                    d[i].ff--;
                }
                else if(d[i].ss.ff<d[i].ss.ss&&(k||kk))
                {
                    if(k)
                    {
                        d[i].ss.ff++;
                        k--;
                    }
                    else
                    {
                        d[i].ss.ss--;
                        kk--;
                    }
                    d[i].ff--;
                }
            }
            if((k||kk)&&d[0].ff>d[1].ff)
            {
                if(d[0].ss.ff==d[0].ss.ss&&k&&kk)
                {
                    k--,k--;

                }

                else if(d[0].ss.ff>d[0].ss.ss&&(k||kk))
                {
                    if(k)
                    {
                        d[0].ss.ff--;
                        k--;
                    }
                    else
                    {
                        d[0].ss.ss++;
                        kk--;
                    }
                    d[0].ff--;
                }
                else if(d[0].ss.ff<d[0].ss.ss&&(k||kk))
                {
                    if(k)
                    {
                        d[0].ss.ff++;
                        k--;
                    }
                    else
                    {
                        d[0].ss.ss--;
                        kk--;
                    }
                    d[0].ff--;
                }
            }
        }
        for(int i=0; i<n; i++)
            x+=(long long)d[i].ff * (long long)d[i].ff;
    }
    else
    {
        while(k||kk)
        {
            if(d[0].ss.ff==d[0].ss.ss&&k&&kk)
            {
                k--,k--;

            }

            else if(d[0].ss.ff>d[0].ss.ss&&(k||kk))
            {
                if(k)
                {
                    d[0].ss.ff--;
                    k--;
                }
                else
                {
                    d[0].ss.ss++;
                    kk--;
                }
                d[0].ff--;
            }
            else if(d[0].ss.ff<d[0].ss.ss&&(k||kk))
            {
                if(k)
                {
                    d[0].ss.ff++;
                    k--;
                }
                else
                {
                    d[0].ss.ss--;
                    kk--;
                }
                d[0].ff--;
            }
        }
        x+=(long long)(d[0].ff * d[0].ff);
    }
    cout<<x<<endl;
    return 0;
}

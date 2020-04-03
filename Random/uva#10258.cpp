#include<bits/stdc++.h>
using namespace std;
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
struct contest
{
    int sr,sl,pt;
};
bool comp(contest u,contest v)
{
    if(u.sl!=v.sl)
        return u.sl>v.sl;
    else if(u.sl==v.sl&&u.pt!=v.pt)
        return u.pt<v.pt;
    else
        return u.sr<v.sr;

}
int x[102],y[102][11],z[102][11];
int main()
{
    faster
    //freopen("UVA10258.txt","w",stdout);
    int cs,T(0);
    cin>>cs;
    cin.ignore();
    cin.ignore();
    int p,q,r;
    char c;
    while(cs--)
    {
        contest re[101];
        int k(0);
        char s[50],c;
        while(gets(s))
        {
            if(!strcmp(s,""))
                break;
            sscanf(s,"%d %d %d %c",&r,&p,&q,&c);
            x[r]=1;
            if(c=='C'){
                if(!y[r][p])
                    y[r][p]=1,z[r][p]+=q;
            }
            else if(c=='I'){
                if(!y[r][p])
                    z[r][p]+=20;
            }
        }
        for(int i=1; i<=100; i++)
        {
            if(x[i])
            {
                re[k].sr=i;
                re[k].sl=0;
                re[k].pt=0;
                for(int j=0; j<10; j++)
                {
                    if(y[i][j])
                    {
                        re[k].sl++;
                        re[k].pt+=z[i][j];
                    }
                }
                k++;
            }

        }
        //cout<<k<<endl;
        sort(re,re+k,comp);
        for(int i=0; i<k; i++)
            cout<<re[i].sr<<' '<<re[i].sl<<' '<<re[i].pt<<'\n';

        mem(x,0);
        mem(y,0);
        mem(z,0);
        if(cs)
            cout<<"\n";
    }
    return 0;
}

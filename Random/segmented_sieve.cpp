#include<bits/stdc++.h>

using namespace std;
#define sz 32770
typedef long long ll;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ff first
#define ss second
#define sf scanf
#define pf printf
int re;
int x[sz];

vector<int>p;
void sieve()
{
    p.push_back(2);
    int l=181;
    for(int i=4;i<sz;i+=2)
        x[i]=1;

    for(int i=3;i<sz;i+=2)
    {
        if(x[i]==0)
        {
            p.push_back(i);
            //re++;
            if(i<=l)
            {
                for(int k=i*i;k<sz;k+=i*2)
                    x[k]=1;
            }
        }
    }
}
int p1,q1;
pair<int,pair<int,int>> phi(int x){
    int ans = x;
    pair<int,pair<int,int>>three;
    for(int i=0; i<re; i++){
        if((p[i]*p[i]) > x) break;
        if(x % p[i] == 0){
            ans -= (ans/p[i]),p1=p[i];//cout<<pri[j]<<'!';
            x /= p[i];
        }
    }
    if(x>1&&x!=p1) {ans -= (ans/x),q1=x;}
    else
        q1=p1;
    //sf("%d %d %d\n",ans,p1,q1);
    three.ff=ans;
    three.ss.ff=p1;
    three.ss.ss=q1;
    return three;
}
int main()
{
    ///faster
    //freopen("intra.txt","r",stdin);
    //freopen("intraO.txt","w",stdout);
    sieve();
    re=p.size();
    int t,n,cs(1);
    ///cin>>t;
    sf("%d",&t);
    while(cs<=t)
    {
        ///cin>>n;
        sf("%d",&n);
        pair<int,pair<int,int>>pr;
        pr=phi(n);
        pf("Case %d : ",cs++);
        cout<<pr.ff<<' '<<pr.ss.ff<<' '<<pr.ss.ss<<'\n';
        //cout<<mp[n]<<'\n';
    }

    return 0;
}


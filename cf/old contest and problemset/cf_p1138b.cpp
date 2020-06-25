#include<bits/stdc++.h>
using namespace std;

#define loop(a,b,c)   for(int a=b;a<c;a++)
#define loopa(p,v)    for(auto p:(v))
#define lloop(a,b,c)  for(long long a=b;a<c;a++)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define sz 100001
int a[sz];
bool c[sz];
map<int,ll>m;
vector<int>v,v1,v2,v3;
int main()
{
    faster
    int n,x,y,p,q,r,u,w;
    string s,ss;
    cin>>n>>s>>ss;
    x=n/2;
    y=p=q=r=0;
    loop(i,0,n)
    {
        if(s[i]=='1'&&ss[i]=='1')
            r++,v1.pb(i+1);
        else if(s[i]=='1')
            p++,v2.pb(i+1);
        else if(ss[i]=='1')
            q++,v3.pb(i+1);
    }
    int g,h;
    g=h=0;
    if(p>x||q>x)
        return cout<<"-1\n",0;

    ///cout<<r<<endl;
    ///cout<<p<<q<<endl;
    bool ck=false;
    loop(i,0,n)
    {
        if(!x||((g>=v2.size()||h>=v3.size())&&x%2==0))break;
        if(!ck)
            v.pb(v2[g++]),x--,ck=true;//s[i]='0';
        else if(ck)
            v.pb(v3[h++]),x--,ck=false;//s[i]='1';
    }
    //cout<<x<<endl;
    if(q>p)
    {
        u=p;
        //ck=true;
        while(q>p&&x&&h<q)
            v.pb(v3[h++]),p++,x--;
        ///cout<<p<<q<<endl;
    }
    else if(p>q)
    {
        u=q;
        while(p>q&&x&&g<p)
            v.pb(v2[g++]),q++,x--;

    }
    //cout<<g<<' '<<h<<endl
   /// cout<<x<<endl;
    loop(i,0,n)
    {
        if(x==0)
            break;
        if(s[i]=='0'&&ss[i]=='0')
            v.pb(i+1),x--;
    }
    loop(i,0,n)
    {
        if(p>=q||!x||!r)break;
        if(s[i]=='1'&&ss[i]=='1')
            v.pb(i+1),p++,x--,r--;//cout<<i+1<<endl;
    }
    if(v.size()==n/2)
    {
        loopa(i,v)
            cout<<i<<' ';
    }
    else
        cout<<"-1\n";
}

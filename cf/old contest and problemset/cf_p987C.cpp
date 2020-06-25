#include<bits/stdc++.h>
using namespace std;
#define loopn(a,b,c)  for(int a=b;a>c;a--)
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
#define sz 3001
map<int,vector<int>>v;
map<int,bool>m;
int a[sz],b[sz];
int main()
{
    faster
    int n;
    ll ans,re,x,y;
    ans=re=4e18;
    cin>>n;
    loop(i,0,n)
        cin>>a[i];
    loop(i,0,n)
        cin>>b[i];
    loop(i,1,n-1)
    {
        x=y=re;
        loop(j,0,i)
        {
            if(a[j]<a[i])
                x=min(x,(ll)b[j]);
        }
        loop(j,i+1,n)
        {
            if(a[j]>a[i])
                y=min(y,(ll)b[j]);
        }
        //cout<<x<<' '<<b[i]<<' '<<y<<endl;
        ans=min(ans,(ll)b[i]+x+y);
    }
    if(ans==re)
        return cout<<"-1\n",0;
    cout<<ans<<endl;
    return 0;
}

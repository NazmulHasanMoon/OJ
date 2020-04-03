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
int main()
{
    faster
    long long x,y,z,a,b;
    cin>>x>>y;
    vector<ll>v,vv;
    loop(i,0,x)
    {
        cin>>z;
        v.pb(z);
    }
    a=1;
    vv.push_back(v[0]-y);
    if(x>1&&v[1]-(v[0]+y)>=y||x==1)
        vv.pb(v[0]+y),a++;
    loop(i,1,x)
    {
        if(v[i]-v[i-1]>2*y&&v[i]-y>vv[a-1])
            vv.pb(v[i]-y),a++;
        if(i+1<x&&v[i+1]-(v[i]+y)>=y||i+1==x)
            vv.pb(v[i]+y),a++;
    }
    cout<<a<<endl;
    return 0;
}

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
#define sz 100001
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
vector<int>v1,v2;
bool R[sz],C[sz];
unordered_set<int>s;
int main()
{
    faster
    ll n,m,x,y,z,p,q,re(0),cnt;
    cin>>n>>m;
    x=y=0;
    loop(i,0,m)
    {
        cin>>p>>q;
        if(!R[p])
            x++,R[p]=1;
        if(!C[q])
            y++,C[q]=1;
        cnt=(x*n+y*n)-(x*y);
        cout<<n*n-cnt<<' ';
    }
    return 0;
}

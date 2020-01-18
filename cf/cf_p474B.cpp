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
#define sz 1000001
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
vector<int>v1,v2;
int main()
{
    faster
    int n,q,x,y(1),z;
    cin>>n;
    loop(i,0,n)
    {
        cin>>x;
        z=x+y-1;
        v1.pb(y);
        v2.pb(z);
        y=z+1;
    }
    cin>>q;
    ///z=v.size();
    vector<int>::iterator it,tt;
    loop(i,0,q)
    {
        cin>>x;
        it=u_b(v1,x);
        tt=u_b(v2,x);
        cout<<max(it-v1.begin(),tt-v2.begin())<<endl;
    }
    return 0;
}

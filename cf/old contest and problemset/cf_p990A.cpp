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
int main()
{
    faster
    ll n,m,a,b,z,mn(1e18);
    cin>>n>>m>>a>>b;
    if(n%m==0)
        return cout<<"0\n",0;
    z=n/m;
    if(z>0)
        mn=min(mn,min((n-(z*m))*b,((m*(z+1))-n)*a));
    else
        mn=min(mn,min((n-0)*b,(m-n)*a));
    cout<<mn<<'\n';
    return 0;
}

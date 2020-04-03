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
#define sz 100
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
vector<int>v1,v2;
int x[sz];
int main()
{
    faster
    int c1,c2,c3,m1,m2,m3,n,x,y;
    cin>>c1>>c2>>c3>>m1>>m2>>m3>>n;
    x=(int)ceil((c1+c2+c3)/5.0);
    y=(int)ceil((m1+m2+m3)/10.0);
    if(x+y<=n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define loop(a,b,c)   for(int a=b;a<c;a++)
#define loopa(p,v)    for(auto p:(v))
#define lloop(a,b,c)  for(long long a=b;a<c;a++)
#define rloop(a,b,c)  for(int a=c-1;a>=b;a--)
#define rlloop(a,b,c) for(long long a=c-1;a>=b;a--)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define TC(t)         scanf("%d",&t);while(t--)
#define sf scanf
#define pf printf
#define SIZE 200001
#define sp ' '
#define nl printf("\n")
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)

#define si(a) sf("%d",&a)
#define sl(a) sf("%I64d",&a)
#define sii(a,b) sf("%d%d",&a,&b)
#define Pi(a) pf("%d\n",a)
#define Pin(a) pf("%d ",a)
#define Pl(a) pf("%I64d\n",a)
#define pln(a) pf("%I64d ",a)
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define case(x) cout<<"Case "<<x<<": "
#define ll long long
int main()
{
    faster
    vector<pair<int,int>>v;
    v.pb({0,0});
    v.pb({1,10});
    v.pb({2,20});
    v.pb({3,30});
    v.pb({4,40});
    v.pb({5,50});
    v.pb({10,01});
    v.pb({11,11});
    v.pb({12,21});
    v.pb({13,31});
    v.pb({14,41});
    v.pb({15,51});
    v.pb({20,02});
    v.pb({21,12});
    v.pb({22,22});
    v.pb({23,32});
    int x,y,z,re=INT_MAX;
    char c;
    cin>>x>>c>>y;
    loopa(i,v){
        if(x>=23&&y>32)
            return cout<<60-y<<'\n',0;
        z=(i.ff-x)*60+(i.ss-y);
        if(z>=0)
            re=min(re,z);///cout<<re<<' '<<i.ff<<'-'<<i.ss<<endl;
    }
    cout<<re<<endl;
    return 0;
}

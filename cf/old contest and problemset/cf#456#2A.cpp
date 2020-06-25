#include<bits/stdc++.h>
#define     sf       scanf
#define     pf       printf
#define     ll       long long
#define     sz       100000001
#define     pi       acos(-1.0)
#define     ff       first
#define     ss       second
#define     pb       push_back
#define     all(x)   x.begin(),x.end()

using namespace std;

/*----------------- Start Here ----------------*/

int n,i,j,s,f,pv=-1;
vector<pair<int,int>>v,vp;
int main()
{
    ll a,b,x,y,z,c(0);
    cin>>a>>b>>x>>y>>z;
    x*=2;
    if(a<x)
        c+=(x-a),a=0;
    else
        a-=x;
    if(a<y)
        c+=(y-a),a=0;
    else
        a-=y;
    if(b<y)
        c+=(y-b),b=0;
    else
        b-=y;
    z*=3;
    if(b<z)
        c+=(z-b);
    cout<<c<<endl;
    return 0;
}

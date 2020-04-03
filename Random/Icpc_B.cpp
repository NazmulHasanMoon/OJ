#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
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
#define SIZE 100001
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
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
        tree_order_statistics_node_update>
        new_data_set;
int  par[SIZE];
new_data_set vec[SIZE];
int root ( int x )
{
    while(par[ x ]!=x)
    {
        par [ x ] = par [ par [ x ]];
        x = par [ x ];
    }
    return x ;
}
void weighted_union ( int A , int B )
{
    if ( vec [ A ].size() <= vec [ B ].size())
    {
        par [ A ] = B;
        for(auto i: vec[A])
            vec[B].insert(i);
    }
    else
    {
        par [B ] = A;
        for(auto i: vec[B])
            vec[A].insert(i);
    }

}
int main()
{
    int tc,cs(1),ans;
    si(tc);
    int n,q,x,y,z,u,v,l,r;
    while(cs<=tc)
    {
        ans=0;
        si(n);
        si(q);
        pf("Case %d:\n",cs++);
        for(int i=1; i<=n; i++)
            vec[i].clear(),par[i]=i;
        loop(i,0,q)
        {
            si(x);
            if(x==0){
                sf("%d %d",&u,&v);
                int X,Y;
                X=root(u);
                Y=root(v);
                if(X!=Y)
                    weighted_union(X,Y);
            }
            else if(x==1)
            {
                sf("%d %d",&u,&x);
                int M=root(u);
                vec[M].insert(x);
            }
            else
            {
                sf("%d %d %d",&u,&l,&r);///query
                int x,y;
                x=vec[par[u]].order_of_key(l);
                y=vec[par[u]].order_of_key(r+1);
                pf("%d\n",y-x);
            }
        }
    }
    return 0;
}
/*
2
3 6
1 2 7
2 1 1 10
0 2 1
2 1 1 10
1 2 1
2 1 1 10
3 7
1 3 2
1 1 100
1 1 2
0 1 3
0 2 1
2 2 1 10
2 1 2 2
*/

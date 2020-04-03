#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100001
#define ll long long
struct info {
    ll prop, sum;
    void reset()
    {
        prop=0;
        sum=0;
    }
} tree[sz * 4];
void update(int node, int b, int e, int i, int j, ll x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].sum += ((e - b + 1) * x);
        tree[node].prop += x;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;

}
ll query(int node, int b, int e, int i, int j, ll carry )
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);

    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;

    ll p1 = query(Left, b, mid, i, j, carry + tree[node].prop);
    ll p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);

    return p1 + p2;
}
int main()
{
    int t,n,q,x,cs(1),p,r,s;
    sf("%d",&t);
    while(cs<=t)
    {
        sf("%d %d",&n,&q);
        memset(tree,0,sizeof(tree));
        ///cout<<n<<'-'<<q<<endl;
        pf("Case %d:\n",cs++);
        for(int i=0;i<q;i++)
        {
            sf("%d",&x);
            //cout<<x<<endl;
            if(x==0)
                sf("%d %d %d",&p,&r,&s),update(1,0,n-1,p,r,(ll)s);
            else
                sf("%d %d",&p,&r),pf("%lld\n",query(1,0,n-1,p,r,0));
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100001
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int a[sz],tree[sz*4];
void build(int node,int b,int e)
{
    if(b==e){
        tree[node]=a[b];
        //cout<<node<<' '<<tree[node]<<"$\n";
        return;
    }
    int mid=(b+e)/2;
    int left=node<<1;
    int right=left+1;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}
void update(int node,int b,int e,int i,int x)
{
    if(i>e||i<b)
        return;
    if(b==i&&i==e)
    {
        if(x==-10000)
            tree[node]=0;
        else
            tree[node]+=x;
        //cout<<tree[node]<<'*'<<node<<'\n';
        return;
    }
    int mid=(b+e)/2;
    int left=node<<1;
    int right=left+1;
    update(left,b,mid,i,x);
    update(right,mid+1,e,i,x);
    tree[node]=tree[left]+tree[right];
    //cout<<tree[node]<<' '<<node<<"!\n";
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b)
        return 0;
    if(i<=b&&j>=e)
        return tree[node];
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    int p=query(left,b,mid,i,j);
    int q=query(right,mid+1,e,i,j);
    return p+q;
}
int main()
{
    //faster
    int t,cs(0),n,q;
    sf("%d",&t);
    while(cs<t)
    {
        pf("Case %d:\n",++cs);
        sf("%d %d",&n,&q);
        int v,x,j;
        for(int i=0; i<n; i++)
            sf("%d",&a[i]);
        build(1,0,n-1);
        while(q--)
        {
            //build(1,0,n-1);
            sf("%d",&x);
            if(x==1)
            {
                sf("%d",&v);
                pf("%d\n",query(1,0,n-1,v,v));
                update(1,0,n-1,v,-10000);
            }
            else if(x==2)
            {
                sf("%d %d",&j,&v);
                update(1,0,n-1,j,v);
            }
            else
            {
                sf("%d %d",&j,&v);
                pf("%d\n",query(1,0,n-1,j,v));
            }
        }
    }
    return 0;
}


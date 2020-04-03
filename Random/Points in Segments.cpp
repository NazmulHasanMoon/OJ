#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 500001
#define ff first
#define ss second
int a[sz],tree[sz*4];
int query(int node,int b,int e,int i,int j)
{
    if(i>a[e]||j<a[b])
        return 0;
    if(a[b]>=i&&a[e]<=j)
        return tree[node];
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    int p=query(left,b,mid,i,j);
    int q=query(right,mid+1,e,i,j);
    return p+q;
}
void build(int node,int b,int e)
{
    if(b==e){
        ///tree[node]=a[b];
        tree[node]=1;
        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    ///tree[node]=min(tree[left],tree[right]);
    tree[node]=tree[left]+tree[right];
    //cout<<tree[node]<<' '<<node<<endl;
}
int main()
{
    int n,x,y,q,t,cs(1);
    sf("%d",&t);
    while(cs<=t)
    {
        sf("%d %d",&n,&q);
        for(int i=1;i<=n;i++)
            sf("%d",&a[i]);
        build(1,1,n);
        pf("Case %d:\n",cs++);
        while(q--)
            sf("%d %d",&x,&y),pf("%d\n",query(1,1,n,x,y));
    }
    return 0;
}


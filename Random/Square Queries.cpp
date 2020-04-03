#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 502
int a[sz][sz],tree[sz][sz*4];
int query(int idx,int node,int b,int e,int i,int j)
{
    if(i>e||j<b)
        return 0;
    if(b>=i&&e<=j)
        return tree[idx][node];
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    int p=query(idx,left,b,mid,i,j);
    int q=query(idx,right,mid+1,e,i,j);
    return max(p,q);
}
void build(int idx,int node,int b,int e)
{
    if(b==e){
        tree[idx][node]=a[idx][b];
        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    build(idx,left,b,mid);
    build(idx,right,mid+1,e);
    tree[idx][node]=max(tree[idx][left],tree[idx][right]);
    //cout<<tree[node]<<' '<<node<<endl;
}
int main()
{
    int n,x,y,z,q,t,cs(1),re;
    sf("%d",&t);
    while(cs<=t)
    {
        sf("%d %d",&n,&q);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
                sf("%d",&a[i][j]);
        }
        for(int i=1;i<=n;i++)
            build(i,1,1,n);
        pf("Case %d:\n",cs++);
        while(q--){
            sf("%d %d %d",&x,&y,&z);
            re=0;
            for(int i=x;i<x+z;i++)
                re=max(re,query(i,1,1,n,y,y+z-1));
            pf("%d\n",re);
        }
    }
    return 0;
}


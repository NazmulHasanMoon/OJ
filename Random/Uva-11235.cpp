#include<bits/stdc++.h>
using namespace std;
#define sz 100001
int a[sz],tree[sz*4],te[sz*4],cc[sz];
map<int,int>mp;
void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=1;
        te[node]=a[b];
        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    if(te[left]==te[right])
        tree[node]=tree[left]+tree[right],te[node]=te[left];
    else
    {
        if(tree[left]>tree[right])
            tree[node]=tree[left],te[node]=te[left];
        else
            tree[node]=tree[right],te[node]=te[right];
    }
    //tree[node]=max(tree[node],cc[e]);
    if(e-b+1>=4)
    {
        for(int k=b;k<=e;k++)
            tree[node]=max(tree[node],cc[k]);
    }
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
    cout<<te[left]<<'-'<<te[right]<<' '<<left<<' '<<right<<' '<<tree[left]<<'-'<<tree[right]<<endl;
    return max(p,q);
}
int main()
{
    int n,q;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        memset(tree,0,n*4);
        memset(te,0,n*4);
        cin>>q;
        for(int i=1; i<=n; i++){
            cin>>a[i];
            cc[i]=++mp[a[i]];
        }
        build(1,1,n);
        int x,y;
        while(q--)
        {
            cin>>x>>y;
            cout<<query(1,1,n,x,y)<<'\n';
        }
        //mp.clear();
    }
    return 0;
}

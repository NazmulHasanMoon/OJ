#include<bits/stdc++.h>
using namespace std;
#define sz 131075
int tree[sz*4],a[sz],n;
void update(int node,int b,int e,int i,int x,int c)
{
    if(i>e||i<b)
        return;
    if(b>=i&&i>=e)
    {
        tree[node]=x;
        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,x,c+1);
    update(right,mid+1,e,i,x,c+1);
    if(n%2==0)
    {
        if(c&1)
            tree[node]=(tree[left]|tree[right]);
        else
            tree[node]=(tree[left]^tree[right]);
    }
    else
    {
        if(c&1)
            tree[node]=(tree[left]^tree[right]);
        else
            tree[node]=(tree[left]|tree[right]);
    }
}
void build(int node,int b,int e,int c)
{
    if(b==e)
    {
        tree[node]=a[b];
        //cout<<tree[node]<<' '<<node<<endl;
        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    build(left,b,mid,c+1);
    build(right,mid+1,e,c+1);
    if(n%2==0)
    {
        if(c&1)
            tree[node]=(tree[left]|tree[right]);
        else
            tree[node]=(tree[left]^tree[right]);
    }
    else
    {
        if(c&1)
            tree[node]=(tree[left]^tree[right]);
        else
            tree[node]=(tree[left]|tree[right]);
    }
    ///cout<<tree[node]<<'-'<<node<<' '<<left<<' '<<right<<'*'<<c<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m,j;
    cin>>n>>m;
    j=1<<n;
    for(int i=1; i<=j; i++)
        cin>>a[i];
    build(1,1,j,0);
    int x,y;
    for(int i=1; i<=m; i++)
    {
        cin>>x>>y;
        update(1,1,j,x,y,0);
        cout<<tree[1]<<'\n';
    }
    return 0;
}

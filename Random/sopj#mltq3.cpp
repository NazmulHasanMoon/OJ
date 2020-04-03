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
struct info
{
    int x,y,z;
} tree[sz*4];
int prop[sz*4],a[sz];
void propaget(int node,int b,int e)
{
    if(prop[node]==1)
    {
        int p,q,r;
        p= tree[node].x,q=tree[node].y,r=tree[node].z;
        tree[node].x=r,tree[node].y=p,tree[node].z=q;
        if(b!=e)
        {
            prop[node*2]=(prop[node*2]+ 1)%3;
            prop[2*node + 1]=(prop[2*node+1]+ 1)%3;
        }
        prop[node]=0;
    }
    else if(prop[node]==2)
    {
        int p,q,r;
        p= tree[node].x,q=tree[node].y,r=tree[node].z;
        tree[node].x=q,tree[node].y=r,tree[node].z=p;
        if(b!=e)
        {
            prop[node*2]=(prop[node*2]+2)%3;
            prop[2*node + 1]=(prop[2*node +1]+2)%3;
        }
        prop[node]=0;
    }
}
void update(int node,int b,int e,int i,int j)
{
    propaget(node,b,e);
    if(i>e||j<b)
        return;
    if(b>=i&&e<=j)
    {
        int p,q,r;
        p= tree[node].x,q=tree[node].y,r=tree[node].z;
        tree[node].x=r,tree[node].y=p,tree[node].z=q;
        //cout<<node<<"!:"<<b<<' '<<e<<endl;
        if(b!=e)
        {
            prop[node*2]=(prop[node*2]+1)%3;
            prop[2*node + 1]=(prop[2*node +1]+1)%3;
           // cout<<prop[2* node + 1]<<' '<<(2* node + 1)<<'!';
        }

    }
    else
    {
        int left=node*2;
        int right=left+1;
        int mid=(b+e)/2;
        update(left,b,mid,i,j);
        update(right,mid+1,e,i,j);
        tree[node].x=tree[left].x+tree[right].x;
        tree[node].y=tree[left].y+tree[right].y;
        tree[node].z=tree[left].z+tree[right].z;
    }

}
int query(int node,int b,int e,int i,int j)
{
    propaget(node,b,e);
    if(i>e||j<b||b>e)
        return 0;
    if(b>=i&&e<=j)
        return tree[node].x;
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    int p=query(left,b,mid,i,j);
    int q=query(right,mid+1,e,i,j);
    return p+q;
}
void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].x=1;
        tree[node].y=tree[node].z=0;
        return;
    }
    int left=node<<1;
    int right=left+1;
    int mid=(b+e)>>1;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node].x=tree[left].x+tree[right].x;
    tree[node].y=tree[left].y+tree[right].y;
    tree[node].z=tree[left].z+tree[right].z;
}
int main()
{
    //faster
    int n,q;
    //cin>>n>>q;
    sf("%d %d",&n,&q);
    build(1,0,n-1);
    for(int i=0; i<q; i++)
    {
        int A,B,C;
        //cin>>A>>B>>C;
        sf("%d %d %d",&A,&B,&C);
        if(A==0)
            update(1,0,n-1,B,C);
        else
            pf("%d\n",query(1,0,n-1,B,C));
    }
    return 0;
}


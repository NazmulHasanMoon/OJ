#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 30002
#define ff first
#define ss second
#define ll long long
int a[sz],tree[sz*4],re,n;
int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b)
        return 0;
    if(b>=i&&e<=j)
        return tree[node];
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    int p=query(left,b,mid,i,j);
    int q=query(right,mid+1,e,i,j);
   // cout<<a[p]<<' '<<a[q]<<' '<<p<<' '<<q<<endl;
    if(p&&!q)return p;
    else if(q&&!p)return q;
    else if(a[p]<a[q])return p;
    else return q;
    ///return min(a[p],a[q]);

}
int result(int b,int e)
{
    if(b>n||e>n||b<1||e<1||b>e)
        return 0;
    if(b==e){
        return a[b];
    }
    int mid=query(1,1,n,b,e);
    int p=result(b,mid-1);
    int q=result(mid+1,e);
    int z=max(p,q);
    return max(z,(e-b+1)*a[mid]);
}
void build(int node,int b,int e)
{
    if(b==e){
        tree[node]=b;
        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=(a[tree[left]] < a[tree[right]])? tree[left]:tree[right];
    //tree[node]=min(tree[left],tree[right]);
}

int main()
{
    int x,y,q,t,cs(1);
    sf("%d",&t);
    while(cs<=t)
    {
        re=0;
        sf("%d",&n);
        for(int i=1;i<=n;i++)
            sf("%d",&a[i]);
        build(1,1,n);
        pf("Case %d: %d\n",cs++,result(1,n));

    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define sz 100001
#define sf scanf
#define pf printf
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
char a[sz];
struct s{
    int car[27];
}tree[4*sz];
void update(int node,int b,int e,int i,char newvalue)
{
    if(i>e||i<b)
        return;
    if(b==i&&i==e)
    {
        tree[node].car[a[b]-'a']=0;
        tree[node].car[newvalue-'a']=1;
        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,newvalue);
    update(right,mid+1,e,i,newvalue);
    //tree[node].car[a[i]-'a']-=1;
    tree[node].car[a[i]-'a']-=1;
    tree[node].car[newvalue-'a']+=1;

    ///cout<<tree[node].car[a[i]-'a']<<'-'<<node<<endl;
}
int query(int node,int b,int e,char c,int i,int j)
{
    if(i>e||j<b)
        return 0;
    if(i<=b&&j>=e)
        return tree[node].car[c-'a'];
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    int p=query(left,b,mid,c,i,j);
    int q=query(right,mid+1,e,c,i,j);
    return p+q;
}
void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].car[a[b]-'a']=1;
        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    for(int i=0;i<26;i++)
    {
        if(tree[left].car[i])
            tree[node].car[i]+=tree[left].car[i];
        if(tree[right].car[i])
            tree[node].car[i]+=tree[right].car[i];
    }
    ///cout<<tree[node]<<"* "<<b<<'-'<<e<<'-'<<mid<<'-'<<node<<' ';
}
int main()
{
    faster
    int n,q,c,x,t;
    //cin>>a>>q;
    sf("%s %d",a,&q);
    n=strlen(a);
    memset(tree,0,sizeof(tree));
    build(1,0,n-1);
    while(q--)
    {
        //cin>>t;
        sf("%d",&t);
        char y[10];
        if(t==1){
            //cin>>x>>y;
            sf("%d %s",&x,y);
            update(1,0,n-1,x,y[0]);
        }
        else{
            //cin>>y>>x>>c;
            sf("%s %d %d",y,&x,&c);
            pf("%d\n",query(1,0,n-1,y[0],x,c));
        }
    }
    return 0;
}


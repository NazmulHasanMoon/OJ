#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define sz 200001
#define ll long long
int vis[sz];
ll child[sz],depth[sz],arr[sz],j;
ll ans;
struct link
{
    int d;
    struct link *next;
};
typedef struct link tree;
tree *G[sz];
void push(tree **head,int v)
{
    tree *temp=*head;
    if(*head==NULL)
    {
        tree *new=(tree*)malloc(sizeof(tree));
        new->d=v;
        new->next=NULL;
        *head=new;
        return;
    }
    tree *new=(tree*)malloc(sizeof(tree));
    new->d=v;
    new->next=*head;
    *head=new;
}
void dfs(int u,ll dep)
{
    vis[u]=1;
    child[u]=1;
    depth[u]=dep;
    tree *temp=G[u];
    while(temp!=NULL)
    {
        if(!vis[temp->d])
        {
            dfs(temp->d,dep+1);
            child[u]+=child[temp->d];
        }
        temp=temp->next;
    }
    arr[++j]=depth[u]-child[u];
}
int getlen(tree *head)
{
    if(head==NULL)return 0;
    return 1+getlen(head->next);
}
void heepy(int i,int n)
{
    int left=i*2;
    int right=left+1;
    int min=i;
    if(left<=n&&arr[left]<arr[i])min=left;
    if(right<=n&&arr[right]<arr[min])min=right;
    if(min!=i)
    {
        arr[min]^=arr[i];
        arr[i]^=arr[min];
        arr[min]^=arr[i];
        heepy(min,n);
    }
}
void heep(int n)
{
    for(int i=n/2;i>=1;i--)
        heepy(i,n);
}
void heepsort(int n)
{
    for(int i=n;i>=2;i--)
    {
        arr[1]^=arr[i];
        arr[i]^=arr[1];
        arr[1]^=arr[i];
        heepy(1,i-1);
    }
}
int main()
{
    int n,f,x,y;
    ///ll sum=0;
    sf("%d %d",&n,&f);
    for(int i=1;i<n;i++)
    {
        sf("%d %d",&x,&y);
        push(&G[x],y);
        push(&G[y],x);
    }
    dfs(1,1);
    heep(n);
    heepsort(n);
    for(int i=1;i<=f;i++)
        ans+=(ll)arr[i];
    pf("%lld\n",ans);
    return 0;
}

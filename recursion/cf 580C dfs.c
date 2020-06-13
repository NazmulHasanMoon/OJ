#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define sz 100001
struct arr
{
    int a;
    struct arr *next;
};
typedef struct arr linklist;
linklist *G[sz];
int vis[sz],cat[sz],m,ans;
int length(linklist *head)
{
    int count=0;
    linklist *cur=head;
    while(cur!=NULL)
    {
        count++;
        if(count>1)
            return count;
        cur=cur->next;
    }
    return count;
}
void dfs(int u,int total)
{
    if(total>m)return;
    vis[u]=1;
    linklist *temp=G[u];
    int len=length(temp);
    if(u>1&&len==1&&total<=m){ans++;
    //pf("%d!!%d\n",u,total);
    }
    while(temp!=NULL)
    {
        if(!vis[temp->a]){
            if(cat[temp->a])
                cat[temp->a]=total+1;
            dfs(temp->a,cat[temp->a]);
        }
        temp=temp->next;
    }
}
void push(linklist** head,int u,int v)
{
    linklist *x;
    x=(linklist*)malloc(sizeof(linklist));
    x->a=v;
    if(*head==NULL)
    {
        x->next=NULL;
        *head=x;
        return;
    }
    x->next=*head;
    *head=x;
}
int main()
{
    int v,e,i,u1,u2,n;
    sf("%d %d",&n,&m);///v=vertex,e=edge
    for(i=1;i<=n;i++){
        sf("%d",&cat[i]);
        G[i]=NULL;
    }
    for(i=1;i<n;i++){
        sf("%d %d",&u1,&u2);
        push(&G[u1],u1,u2);
        push(&G[u2],u2,u1);
    }
    dfs(1,cat[1]);
    pf("%d\n",ans);
    return 0;
}


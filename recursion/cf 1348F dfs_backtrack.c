#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define ll long long
#define sz 200001
int taken[sz],ans[2][sz];
struct link
{
    int d;
    struct link *next;
};
typedef struct link list;
list *G[sz],*res;
int j;
void push(list** head,int a,int b)
{
    for(int i=a; i<=b; i++)
    {
        list *new=(list*)malloc(sizeof(list));
        new->d=i;
        if(*head==NULL)
        {
            new->next=NULL;
            *head=new;
            continue;
        }
        new->next=*head;
        *head=new;
    }
    return;
}
void append(list** head_ref,int v)
{
    list *new_node=(list*)malloc(sizeof(list));
    list *temp=*head_ref;
    new_node->d=v;
    new_node->next=NULL;
    if(*head_ref==NULL)
    {
        *head_ref=new_node;
        return;
    }
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=new_node;
}
int length(list *node)
{
    if(node==NULL)
        return 0;
    return 1+length(node->next);
}
void copy(int k)
{
    int i=0;
    while(res!=NULL)
    {
        ans[k][i++]=res->d;
        res=res->next;
    }
}
void dfs(int u,int n)
{
    if(length(res)==n)
    {
        copy(j++);
        return;
    }
    if(u>n)
        return;
    //int x=length(G[u]);
    list *temp=G[u];
    while(temp!=NULL)
    {
        if(!taken[temp->d])
        {
            taken[temp->d]=1;
            append(&res,temp->d);
            dfs(u+1,n);
            if(j)
                return;
            //pop(res);
            taken[temp->d]=0;
        }
        temp=temp->next;
    }
    return;
}
int main()
{
    int n,a,b;
    sf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        sf("%d %d",&a,&b);
        push(&G[i],a,b);
    }
    dfs(1,n);
    if(j>1)
    {
        pf("NO\n");
        for(int k=0; k<j; k++)
        {
            for(int i=0; i<n; j++)
                pf("%d ",ans[k][i]);
            pf("\n");
        }
        return 0;
    }
    pf("YES\n");
    for(int i=0;i<n;i++)
        pf("%d ",ans[0][i]);
    pf("\n");
    return 0;
}

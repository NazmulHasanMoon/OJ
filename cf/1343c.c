#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define sz 200001
#define ll long long
ll a,sum,neg,pos;
struct link
{
    ll v;
    struct link *next;
};
typedef struct link queue;
void push(queue** head_ref,int d)
{
    if(*head_ref==NULL)
    {
        queue *new=(queue*)malloc(sizeof(queue));
        new->v=d;
        new->next=NULL;
        *head_ref=new;
        return;
    }
    queue *temp=*head_ref;
    if((temp->v>0&&d>0&&temp->v<d)||(temp->v<0&&d<0&&temp->v<d))
        temp->v=d;
    else if((temp->v>0&&d<0)||(temp->v<0&&d>0))
    {
        //pf("eseci=%d\n",sum);
        sum+=temp->v;
        //pf("Eseci=%d %d\n",sum,temp->v);
        temp->v=d;
    }

}
int main()
{
    ll t,n,i;
    sf("%lld",&t);
    while(t--)
    {
        queue *head=NULL;
        sf("%lld",&n);
        sum=0;
        for(i=0; i<n; i++)
        {
            sf("%lld",&a);
            push(&head,a);
            //pf("%d @ ",head->v);
        }
        //pf("ETA=%d @ %d\n",head->v,sum);
        sum+=head->v;
        pf("%lld\n",sum);
        ///free(&head);
    }
    return 0;
}

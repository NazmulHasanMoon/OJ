#include<bits/stdc++.h>
using namespace std;
#define null 0
struct link{
 int n;
 struct link *next;
};
typedef struct link node;
void creat(node *h)
{
    cin>>h->n;
    if(!h->n)
        h->next=NULL;
    else
    {
        h->next=(node*)malloc(sizeof(node));
        creat(h->next);
    }
}
void print(node *h)
{
    if(h->next!=NULL){
        cout<<h->n<<' ';
        print(h->next);
    }
}
node *find(int k,node *p)
{
    if(p->next->n==k)
        return p;
    else
    {
        if(p->next->next==NULL)
            return NULL;
        else
            find(k,p->next);
    }
}
void add(node *h)
{
    int k;
    cin>>k;
    node *p,*q;
    if(h->n==k)
    {
        p=(node *)malloc(sizeof(node));
        cin>>p->n;
        p->next=h;
        h=p;
    }
    else
    {
        q=find(k,h);
        if(q==NULL)
            cout<<"Not found\n";
        else
        {
            p=(node*)malloc(sizeof(node));
            cin>>p->n;
            p->next=q->next;
            q->next=p;
        }
    }
}
void del(node *h){
    int k;
    cin>>k;
    node *p,*q;
    if(h->n==k)
    {
        p=h->next;
        free(h);
        h=p;
    }
    else
    {
        q=find(k,h);
        if(q->next)
        {
            p=q->next->next;
            free(q->next);
            q->next=p;
        }
        else
            cout<<"key not found\n";
    }
}
int main()
{
    node *head;
    head=(node*)malloc(sizeof(node));
    creat(head);
    add(head);
    del(head);
    print(head);
    return 0;
}

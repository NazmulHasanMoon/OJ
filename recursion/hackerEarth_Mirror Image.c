#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
struct link
{
    int node;
    struct link *left;
    struct link *right;
};
typedef struct link list;
list * find(list *head,int n)
{
    list *temp;
    temp=NULL;
    if(head==NULL||head->node==n)
        return head;
    if(temp==NULL)
        temp=find(head->left,n);
    if(temp==NULL)
        temp=find(head->right,n);
    return temp;
}
int main()
{
    list *root;
    root->node=1;
    root->left=root->right=NULL;
    int i,N,Q,a,b;
    char c;
    sf("%d %d",&N,&Q);
    for(i=0;i<N;i++){
        sf("%d %d %c",&a,&b,&c);
        list *temp=find(root,a);
    }
    return 0;
}

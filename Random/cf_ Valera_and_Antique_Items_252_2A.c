#include<stdio.h>
#define sz 60
int a[sz];
int main()
{
    int n,p,s,c,l;
    long int i,j,k,q,y,m,it;
    while(scanf("%d %ld",&n,&m)!=EOF)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            s=0;
            scanf("%d",&p);
            for(j=0;j<p;j++)
            {
                scanf("%ld",&it);
                if(it<m){
                    s=1;
                   // printf("%ld\t",it);
                }
            }
            if(s==1){
                a[c]=i+1;
                c++;
            }
        }
        printf("%d\n",c);
        for(i=0;i<c;i++){
            printf("%d",a[i]);
            if(i<c-1)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>
#define sz 5000
int a[sz],b[sz],c[sz];
void print(int x,int a[],int b[],int c[])
{
    int t;
    for(t=0;t<x;t++)
        printf("%d %d %d\n",a[t],b[t],c[t]);
}
int main()
{
    int i,j,k,l,n,s1,s2,s3,x,m;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0,j=0,k=0,l=0;i<n;i++)
        {
            scanf("%d",&m);
            if(m==1)
            {
                s1=i+1;
                a[j]=s1;
                j++;
            }
            if(m==2)
            {
                s2=i+1;
                b[k]=s2;
                k++;
            }
            if(m==3)
            {
                s3=i+1;
                c[l]=s3;
                l++;
            }
        }
        if(j<=k&&j<=l){
            printf("%d\n",j);
            print(j,a,b,c);
        }
        else if(k<=j&&k<=l){
            printf("%d\n",k);
            print(k,a,b,c);
        }
        else if(l<=k&&l<=j){
            printf("%d\n",l);
            print(l,a,b,c);
        }
        //print(x,a,b,c);
    }
    return 0;
}

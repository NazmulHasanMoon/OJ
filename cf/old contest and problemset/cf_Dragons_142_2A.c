#include<stdio.h>
#define sz 1002
int x[sz],y[sz];
int main()
{
    long int i,j,n,k,l,s;
    while(scanf("%ld %ld",&s,&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%ld %ld",&x[i],&y[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(x[i]>x[j])
                {
                    k=x[i];
                    x[i]=x[j];
                    x[j]=k;
                    l=y[i];
                    y[i]=y[j];
                    y[j]=l;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                //printf("%ld %ld\t",s,x[i]);
                if(s>x[i])
                    s+=y[i];
                else{
                    s=0;
                    break;
                }
            }
            else
            {
                //printf("\t%ld %ld\t",s,x[i]);
                if(s>x[i]){
                    s+=y[i];
                }
                else
                {
                    s=0;
                    break;
                }
            }

        }
        if(s!=0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

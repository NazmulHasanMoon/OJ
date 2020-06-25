#include<stdio.h>
#define sz 1000
#define ss 100
char ch[sz][ss];
int x[sz],y[sz];
int main()
{
    int i,j,k,l,m,n,r,c,r2,c2;
    while(scanf("%d %d",&r,&c)!=EOF)
    {
        getchar();
        for(i=0,k=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%c",&ch[i][j]);
                if(ch[i][j]=='S')
                {
                    x[k]=i;
                    y[k]=j;
                    k++;
                }
            }
            getchar();
        }

        r2=0;c2=0;
        for(i=0;i<k;i++)
        {
            for(j=0;j<k;j++)
            {

                if(x[i]==x[j])
                {
                    if(i!=j){
                        break;
                    }
                    else
                    {
                        r2++;
                        break;
                    }
                }
            }
        }
        for(i=0;i<k;i++)
        {
            for(j=0;j<k;j++)
            {

                if(y[i]==y[j])
                {
                    if(i!=j){
                        break;
                    }
                    else
                    {
                        c2++;
                        break;
                    }
                }
            }
        }
        m=(r*c)-(r2*c2);
        printf("%d\n",m);
    }
    return 0;

}

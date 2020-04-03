#include<stdio.h>
#include<string.h>
#define sz 120
char c[sz][sz];
int main()
{
    int i,j,k,l,n,m,d;
    while(scanf("%d %d",&n,&d)!=EOF)
    {
        getchar();
        l=0;m=-3200;
        for(i=0;i<d;i++)
        {
            k=0;
            for(j=0;j<n;j++)
            {
                scanf("%c",&c[i][j]);
                if(c[i][j]=='0')
                    k=1;
            }
            getchar();
            if(k==1)
                l++;
            if(m<l)
                m=l;
            if(k==0)
                l=0;
        }
        printf("%d\n",m);
    }
    return 0;
}

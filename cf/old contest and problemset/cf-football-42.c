#include<stdio.h>
#include<string.h>
#define sz 150
char c[sz][sz],ch[sz][sz];
int main()
{
    int i,j,k,x,l,m,n;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        for(i=0;i<n;i++){
            scanf("%s",c[i]);
            getchar();
        }
        m=-1;
        x=0;
        for(i=0,k=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(strcmp(c[i],c[j])==0)
                {
                    if(i!=j)
                        break;
                    else if(i==j){
                        strcpy(ch[k],c[i]);
                        k++;
                        break;
                    }
                }
            }
        }
        for(i=0;i<k;i++)
        {
            for(j=0,l=0;j<n;j++)
            {
                if(strcmp(ch[i],c[j])==0)
                    l++;
            }
            if(m<l)
            {
                m=l;
                x=i;
            }
        }
        printf("%s\n",ch[x]);
    }
    return 0;
}

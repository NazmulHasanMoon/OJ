#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define sz 25
char c[sz],ch[sz];
int a[sz];
int main()
{
    int i,j,k,l,m,n,s,count;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        for(i=0;i<n;i++)
        {
            s=0;
            for(j=0;j<19;j++)
            {
                scanf("%c",&c[j]);
            }
            getchar();
            for(j=0,k=0;j<19;j++)
            {
                if(!isspace(c[j])){
                    c[k]=c[j];
                    k++;
                }
            }
            for(j=0,k=0;j<16;j++)
            {
                if(j==0||j%2==0){
                    a[k]=2*((int)c[j]-48);
                    k++;
                }
                else
                    s+=(int)((c[j])-48);
            }
            count=0;
            for(j=0;j<8;j++)
            {
                while(a[j]!=0)
                {
                    count+=a[j]%10;
                    a[j]/=10;
                }
            }
            count=count+s;
            if(count%10==0||count==0)
                printf("Valid\n");
            else
                printf("Invalid\n");
        }
    }
    return 0;
}

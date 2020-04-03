#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long int i,j,k,n,d[100000],x,count,count2,y;
    while(scanf("%lu %lu",&n,&x)!=EOF)
    {
        count = x;
        count2=0;
        char c,ch,c1="+ ";
        for(i=0;i<n;i++)
        {
            scanf("%s %lu",c,&d[i]);
            y=strcmp(c,c1);
            if(y==0)
            {
                count=count+d[i];
            }
            else if(y!=0&&d[i]<=count)
            {
                count=count-d[i];
            }
            else if(y!=0&&d[i]>count)
            {
                count2=count2+1;
            }
            printf("%lu %lu\n",count,count2);
        }
    }
    return 0;
}

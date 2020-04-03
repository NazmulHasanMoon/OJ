#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,j,n,x,y,count=0,s=0;
    char c[4],ch[]="+";
    while(scanf("%lld %lld",&n,&x)!=EOF){
        for(i=0;i<n;i++)
        {
            scanf("%s %lld",c,&y);
            if(strcmp(c,ch)==0)
                x=x+y;
            else if(strcmp(c,ch)!=0)
            {
                if(y>x)
                    count++;
                else
                    x=x-y;
            }

        }
        printf("%lld %lld\n",x,count);
    }
    return 0;
}

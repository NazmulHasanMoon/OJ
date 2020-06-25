#include<stdio.h>
int main()
{
    int a,b,c,d,p1,t1,p,t;
   // while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
    //{
        scanf("%d %d %d %d",&a,&b,&c,&d);
        t=3*a/10;
        p=a-((a/250)*c);
        if(p<t)
            p=t;
        t1=3*b/10;
        p1=b-((b/250)*d);
        if(p1<t1)
            p1=t1;
        if(p1>p)
            printf("Vasya\n");
        else if(p1<p)
            printf("Misha\n");
        else
            printf("Tie\n");
    //}
    return 0;
}

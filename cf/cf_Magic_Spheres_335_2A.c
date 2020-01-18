#include<stdio.h>
int main()
{
    unsigned long int i,j,k,x,y,z,a,b,c,count1,count2;
    while(scanf("%lu %lu %lu %lu %lu %lu",&a,&b,&c,&x,&y,&z)!=EOF)
    {
        count1=count2=0;
        if(a>x)
            count1+=((a-x)/2);
        else
            count2+=(x-a);
        if(b>y)
            count1+=((b-y)/2);
        else
            count2+=(y-b);
        if(c>z)
            count1+=((c-z)/2);
        else
            count2+=(z-c);
        if(count1>=count2)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}

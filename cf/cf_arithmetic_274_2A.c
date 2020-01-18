#include<stdio.h>
#define sz 7
int s[sz];
int main()
{
    int a,b,c,i,max;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        max=-3200;
        s[0]=a+b*c;
        s[1]=a*b*c;
        s[2]=(a*b)+c;
        s[3]=a*(b+c);
        s[4]=(a+b)*c;
        s[5]=a+b+c;
        for(i=0;i<6;i++)
        {

            if(max<s[i])
            {
                max=s[i];
            }
        }
        printf("%d\n",max);
    }
    return 0;
}

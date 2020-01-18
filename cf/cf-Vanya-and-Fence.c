#include<stdio.h>
#define sz 1000
int a[sz];
int main()
{
    int n,h,i,j,s;
    while(scanf("%d %d",&n,&h)!=EOF)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<=h)
                s++;
            else if(a[i]>h)
                s+=2;
        }
        printf("%d\n",s);
    }
    return 0;
}

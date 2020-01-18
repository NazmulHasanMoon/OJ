#include<stdio.h>
#define sz 30
int x[sz];
int main()
{
    int i,j,k,l,a,b,c,n;
    while(scanf("%d",&n)!=EOF)
    {
        a=b=c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
        }
        for(i=0;i<n;i+=3){
            a+=x[i];
            b+=x[i+1];
            c+=x[i+2];
        }
        if(a>=b&&a>=c)
            printf("chest\n");
        else if(b>=a&&b>=c)
            printf("biceps\n");
        else
            printf("back\n");
    }
    return 0;
}

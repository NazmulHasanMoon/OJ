#include<stdio.h>
#include<string.h>
#define sz 105
char c[sz];
int main()
{
    int i,n,k,g,t,h;
    g=t=h=0;
    scanf("%d %d",n,k);
    getchar();
    for(i=0;i<k;i++)
    {
        scanf("%c",&c[i]);
        if(c[i]=='G')
            g=i+1;
        else if(c[i]=='T')
            t=i+1;
        else if(c[i]=='#')
            h=i+1;
    }
    printf("%d %d\n",t,g);
    if(h>g&&t>h)
    {
        if((h-g)%k==0)
            printf("3NO\n");
        else if((t-g)%k==0)
            printf("3YES\n");
        else
            printf("3NO\n");
    }
    else if(h>t&&g>h)
    {
        if((g-h)%k==0)
            printf("2NO\n");
        else if((g-t)%k==0)
            printf("2YES\n");
        else
            printf("3NO\n");
    }
    else if(t>g)
    {
        cout<<t<<g<<t-g<<t-g%k<<endl;
        if((t-g)%k==0)
            printf("1NO\n");
        else
            printf("1NO\n");
    }
    else
    {
       cout<<t<<" "<<g<<endl;
        if((g-t)%k==0)
            printf("0YES\n");
        else
            printf("0NO\n");
    }
    return 0;
}

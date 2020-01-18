#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a,b,s,s2,s3;
    while(scanf("%d %d %d %d",&n,&m,&a,&b)!=EOF)
    {
        s=0;
        l=m;
        s2=0;
        for(i=0;i<n;i++)
        {
            s2+=a;
        }
        if(m<=n){
            while(m<=n)
            {
                s+=b;
                m+=l;
                if(m>n){
                    m-=l;
                    break;
                }
            }
            if(s2<=s&&m<=n)
                printf("%d\n",s2);
            else if(m<n&&s2>s)
            {
                k=n-m;
                if(a<b){
                    for(i=0;i<k;i++)
                    {
                        s+=a;
                    }
                    printf("%d\n",s);
                }
                else
                    printf("%d\n",s+b);
            }
            else if(m==n&&s2>s)
                printf("%d\n",s);
        }
        else if(n<=m&&a<b){
            if(s2<b)
                printf("%d\n",s2);
            else
                printf("%d\n",b);
        }
        else if(n<=m&&a>b)
            printf("%d\n",b);
    }
    return 0;
}

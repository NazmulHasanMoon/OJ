#include<stdio.h>
int main()
{
    long int i,j,k,l,m,n,a,b,c;
    while(scanf("%ld %ld",&n,&c)!=EOF)
    {
        k=0;
        for(i=0;i<n;i++)
        {
            scanf("%ld",&b);
            k++;
            if(i==0)
                a=b;
            else
            {
                m=b-a;
                if(m>c){
                    k=1;
                }
                a=b;

            }
        }
        printf("%ld\n",k);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    long int a,b,d,n,x,y,z,c,i,j,k,l,m;
    long long s;
    /*while(scanf("%ld %ld %ld",&n,&b,&d)!=EOF)
    {*/
        scanf("%ld %ld %ld",&n,&b,&d);
        s=0;
        k=0;
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a);
            if(a<=b){
                s+=a;
                if(s>d){
                    k++;
                    s=0;
                }

            }
        }
        printf("%ld\n",k);
    /*}*/
    return 0;
}

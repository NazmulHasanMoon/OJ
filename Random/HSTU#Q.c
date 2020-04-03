#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long int T,k,i,M,N,H,d1,d2,d3,d4;
    double tax,s1,s2,s3,s4;
    scanf("%lu",&T);
    for(i=1;i<=T&&T<=5000;i++)
    {
        scanf("%lu",&k);
        if(k<=180000)
        {
            printf("Case %lu: 0\n",i);
        }
        if(180000<k&&k<=200000)
        {
            printf("Case %lu: 2000\n",i);
        }
        if(200000<k&&k<=480000)
        {
            H=k-180000;
            tax=H*(10.0/100);
            N=H*(10.0/100);
            if(tax==N)
            {
                printf("Case %lu: %lu\n",i,N);
            }
            else
            {
                M=ceil(tax);
                printf("Case %lu: %lu\n",i,M);
            }
        }
        if(480000<k&&k<=880000)
        {
            H=k-480000;
            s1=300000*(10.0/100);
            s2=H*(15.0/100);
            s3=s1+s2;
            N=(int)s1+(int)s2;
            if(s3==N)
            {
                printf("Case %lu: %lu\n",i,N);
            }
            else
            {
                M=ceil(s3);
                printf("Case %lu: %lu\n",i,M);
            }
        }
        if(880000<k&&k<=1180000)
        {
            H=k-880000;
            s1=H*(20.0/100);
            s2=300000*(10.0/100);
            s3=400000*(15.0/100);
            s4=s1+s2+s3;
            N=(int)s1+(int)s2+(int)s3;
            if(s4==N)
            {
                printf("Case %lu: %lu\n",i,N);
            }
            else
            {
                M=ceil(s4);
                printf("Case %lu: %lu\n",i,M);
            }
        }
        if(k>1180000)
        {
            H=k-1180000;
            s1=H*(25.0/100);
            s2=300000*(30.0/100);
            s3=400000*(15.0/100);
            s4=s1+s2+s3;
            N=(int)s4;
            if(s4==N)
            {
                printf("Case %lu: %lu\n",i,N);
            }
            else
            {
                M=ceil(s4);
                printf("Case %lu: %lu\n",i,M);
            }
        }
    }
    return 0;
}

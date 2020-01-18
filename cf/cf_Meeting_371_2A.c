/*--------------------------***
Name: Md. Nazmul Hasan Moon
Name of Institution: HSTU
Nationality:Bangladeshi
Email: nazmulmoon123@gmail.com
-------------------------------*/

#include<stdio.h>
int main()
{
    long long l1,r1,l2,r2,k,s;
    long long i;
    scanf("%I64d",&l1);
    scanf("%I64d",&r1);
    scanf("%I64d",&l2);
    scanf("%I64d",&r2);
    scanf("%I64d",&k);
    s=0;
    if(l2<l1)
        l2=l1;
    if(r1>r2)
        r1=r2;
    if(k>=l2&&k<=r1)
    {
        if((k==r2&&r2==l2))
            s=0;
        if(l2>r1)
            s=0;
        else
            s=r1-l2;
    }
    else if(k>r1||k<r1)
    {
        s=r1-l2+1;
        if(l2>r1)
            s=0;
    }
    printf("%I64d\n",s);
    return 0;
}

#include<stdio.h>
int main()
{
    unsigned int i,N;
    scanf("%u",&N);
    for(i=2;i<=10000;i=i+13)
    {
        printf("%u\n",i);
    }
    return 0;
}

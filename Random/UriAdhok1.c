#include<stdio.h>
int main()
{
    unsigned long int a,b,c;
    while(scanf("%lu %lu",&a,&b)!=EOF)
    {
        c=a^b;// here ^ means logical XOR
        printf("%lu\n",c);
    }
    return 0;
}

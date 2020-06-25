#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long int N;
    while(scanf("%lu",&N)!=EOF)
    {
        if(1<=N&&N<=100000)
            printf("%lu\n",N+1);
    }
    return 0;
}

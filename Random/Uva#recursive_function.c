#include<stdio.h>
long int f91(long int N)
{
    if(N<=100)
       return f91(f91(N + 11));
    if(N>=101)
        return (N-10);
}
int main()
{
    long int N;
    while(1)
    {
        scanf("%ld",&N);
        if(N==0)
            break;
        printf("f91(%ld) = %ld\n",N,f91(N));
    }
    return 0;
}

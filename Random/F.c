#include<stdio.h>
int main()
{
   unsigned int N,A,B,S;
   while(scanf("%u %u %u",&N,&A,&B)!=EOF&&1<=N&&N<=100&&1<=A&&A<=100&&1<=B&&B<=100)
   {
       S=N*(A*B)*2;
       printf("%u\n",S);
   }
   return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int a,b,c,d;
   int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld%ld%ld%ld",&a,&b,&c,&d);

        if(a==b && b==c && c==d && d==a)
        {
            printf("square\n");
        }
        else if((a==c && b==d)|| (a==b && b==c)||(a==d && b==c))
        {
            printf("rectangle\n");
        }
        else if((a<b+c+d) && (b<a+c+d) && (c<a+b+d) && (d<a+b+c))
        {
            printf("quadrangle\n");
        }
        else
        {
            printf("banana\n");
        }
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l;
    char c[10];
    for(i=0;i<1000000;i++)
    {
        scanf("%s",c);
        l=strlen(c);
        if(l==1)
        {
            break;
        }
        else
        {
            if(l==4)
            {
                printf("Case %lu: Hajj-e-Akbar\n",i+1);
            }
            else if(l==5)
            {
                printf("Case %lu: Hajj-e-Asghar\n",i+1);
            }
        }
    }
    return 0;
}

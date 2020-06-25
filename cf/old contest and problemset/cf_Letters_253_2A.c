#include<stdio.h>
#include<string.h>
#define sz 1002
char c[sz];
int main()
{
    int i,j,k,l;
    while(gets(c))
    {
        l=strlen(c)-1;
        for(i=1,k=0;i<l;i++)
        {
            for(j=1;j<l;j++)
            {
                if(c[i]==c[j])
                {
                    if(i!=j)
                        break;
                    else if(i==j&&c[j]>=97&&c[j]<=122){
                        k++;
                        break;
                    }
                }
            }
        }
        printf("%d\n",k);
    }
    return 0;
}

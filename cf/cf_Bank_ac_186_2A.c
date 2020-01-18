#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define sz 100
char c[sz],ch[sz];
int main()
{
    long int i,j,k,l,m,n,s;
    while(scanf("%s",c)!=EOF)
    {
        n=atoi(c);
        if(n>=0)
            printf("%ld\n",n);
        else
        {
            l=strlen(c)-1;
            if(l>1){
                for(i=0,j=0;i<=l;i++)
                {
                    if(i<l-1){
                        ch[j]=c[i];
                        j++;
                    }
                    else if(i==l-1)
                    {
                        if(c[i]<c[i+1])
                        {
                            ch[j]=c[i];
                        }
                        else
                            ch[j]=c[i+1];
                        j++;
                    }
                }
                ch[j]='\0';

                n=atoi(ch);
                printf("%ld\n",n);
            }
            else
                printf("0\n");
        }
    }
    return 0;
}

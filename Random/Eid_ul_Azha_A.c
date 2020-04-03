#include<stdio.h>
#include<string.h>
#define sz 200002
char c[sz],ch[sz],cc[sz];
int main()
{
    long long int i,j,k,l,x;
    while(gets(c))
    {
        for(i=0,k=0;i<strlen(c);i++)
        {
            for(j=0;j<strlen(c);j++)
            {
                if(c[i]==c[j])
                {
                    if(i!=j)
                        break;
                    else if(i==j){
                        ch[k]=c[i];
                        k++;
                        break;
                    }
                }
            }
        }
        for(i=0,l=0;i<k;i++)
        {
            for(j=0,x=0;j<strlen(c);j++)
            {
                if(isalpha(c[j])){
                    if(ch[i]==c[j])
                        x++;
                }

            }
            if(x%2!=0)
            {
                cc[l]=ch[i];
                l++;
            }
        }
        if(l==0)
            printf("-1\n");
        else
        {
            for(i=0;i<l;i++)
                printf("%c",cc[i]);
            printf("\n");
        }

    }
    return 0;
}

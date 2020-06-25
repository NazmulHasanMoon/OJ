#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define sz 2000
char c[sz],ch[sz],str[sz];
int main()
{
    int i,j,l,m,p,n,x,y,z,t,k,jj;
    char temp;
    while(scanf("%d",&k)!=EOF)
    {
        getchar();
        scanf("%s",c);
        getchar();
        for(i=0;i<strlen(c)-1;i++)
        {
            for(j=i+1;j<strlen(c);j++)
            {
                if(c[i]>c[j])
                {
                    temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
                }
            }
        }
        for(i=0;i<strlen(c);i++)
        {
            for(j=0,x=0;j<strlen(c);j++)
            {
                if(c[i]==c[j])
                    x++;
            }
            if(x%k!=0){
                printf("-1\n");
                break;
            }
        }
        if(x%k==0){
            for(i=0,l=0;i<strlen(c);i++)
            {
                for(j=0;j<strlen(c);j++)
                {
                    if(c[i]==c[j])
                    {
                        if(i!=j)
                            break;
                        else if(i==j){
                            ch[l]=c[i];
                            l++;
                            break;
                        }
                    }
                }
            }
            ch[l]='\0';
            for(i=0,x=0,jj=0;i<l;i++)
            {
                for(j=0;j<strlen(c);j++)
                {
                    if(ch[i]==c[j])
                        x++;
                }
                for(;jj<x/k;jj++)
                {
                    str[jj]=ch[i];
                }
            }
            str[jj]='\0';
            for(i=0;i<k;i++){
                printf("%s",str);
            }
            printf("\n");
        }

    }
    return 0;
}


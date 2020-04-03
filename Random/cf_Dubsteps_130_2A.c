#include<stdio.h>
#include<string.h>
#define size 204
char c[size];
int main()
{
    int i,j,k,l,s,m;
    while(scanf("%s",c)!=EOF)
    {
        l=0;
        s=0;
        m=0;
        for(i=0,j=1,k=2;m<strlen(c);i++,j++,k++,m++)
        {
            if(c[i]=='W'&&c[j]=='U'&&c[k]=='B')
            {
                if(i!=0&&i!=3)
                {
                    l=i-s;
                    if(l!=3)
                        printf(" ");
                }
                else if(i==3&&c[i-3]!='W')
                {
                    printf(" ");
                }
                s=i;
                m=m+2;
                i=i+2;
                j=j+2;
                k=k+2;

            }
            else
            {
                printf("%c",c[m]);
            }
        }
        printf("\n");

    }
    return 0;
}

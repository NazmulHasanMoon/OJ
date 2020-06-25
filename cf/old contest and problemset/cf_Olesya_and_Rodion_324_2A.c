/*#include<stdio.h>
int main()
{
	int n,t,i;
	while(scanf("%d %d",&n,&t)!=EOF)
	{
		if(n==1&&t==10)
		{
			printf("-1\n");
		}
		else if(t==10)
		{

			for(i=1;i<n;i++)
			{
				printf("1");
			}
			printf("0\n");
		}
		else
		{
			for(i=0;i<n;i++)
			{
				printf("%d",t);
			}
			printf("\n");
		}
	}
	return 0;
}*/
#include<stdio.h>
#include<string.h>
#define sz 1000
char ch[sz];
int main()
{
    int l,i;
    while(gets(ch))
    {
    l=strlen(ch);
    for(i=0;i<l;i++){
        printf("%c",ch[i]-7);
    }
    printf("\n");
    }
    return 0;
}

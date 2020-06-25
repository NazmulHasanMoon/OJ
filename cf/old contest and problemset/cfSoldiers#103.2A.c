#include<stdio.h>
int main()
{
    int i,k,j,max,min,s[101],n,x,y;
    while(scanf("%d",&n)!=EOF)
    {
        x=0;
        max=-2000;
        min=20000;
        for(i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
            if(max<s[i])
                max=s[i];
            if(min>s[i])
                min=s[i];
        }
        for(i=0;i<n;i++)
        {
            if(s[i]==min)
            {
                y=i+1;
            }
        }
        for(j=0;j<n;j++)
        {
            if(s[j]==max){
                x=j+1;
                break;
            }

        }
        if(s[0]==max&&s[n-1]==min)
        {
            printf("0\n");
        }
        else if(s[0]==max&&s[n-1]!=min)
        {
            printf("%d\n",n-y);
        }
        else if(y>x&&x==1)
        {
            printf("%d\n",n-y);
        }
        else if(y>x&&x>1)
        {
            k=x-1+n-y;
            printf("%d\n",k);
        }
        else if(x>y)
        {
            k=x-1+n-y-1;
            printf("%d\n",k);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}

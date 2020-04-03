#include<stdio.h>
int main()
{
    int i,j,X,Y,temp;
    while(scanf("%d %d",&X,&Y)!=EOF)
    {
        j=0;
        if(X>Y)
        {
            temp=X;
            X=Y;
            Y=temp;
        }
        for(i=X+1;i<Y;i++)
        {
            if(i%2!=0)
            {
                j=j+i;
            }
        }
        printf("%d\n",j);
    }
    return 0;
}

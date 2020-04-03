#include<stdio.h>
int main()
{
    int i,j,k,n,num[30];
    printf("Enter test case:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                k=num[i];
                num[i]=num[j];
                num[j]=k;
            }
        }
    }
    printf("The number arranged in ascending order:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}

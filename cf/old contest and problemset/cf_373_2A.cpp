#include<bits/stdc++.h>
#include<stdio.h>
#define sz 92
int a[sz];
int main()
{
    int n,i,j;
    scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        if(n==1)
            printf("-1\n");
        else if(a[n-1]==15)
            printf("DOWN\n");
        else if(a[n-1]==1)
            printf("UP\n");
        else
        {
            if(a[n-1]>a[n-2])
                printf("UP\n");
            else if(a[n-1]<a[n-2])
                printf("DOWN\n");
            else
                printf("-1\n");
        }
    return 0;
}

#include<stdio.h>
int main()
{
    int i,k,n,temp,j;
    while(scanf("%d %d", &k,&n)!=EOF){
    int a[n];
    for(j=0;j<n;j++)
        scanf("%d", &a[j]);
    temp=0;
    for(i=0;i<n;i++){
        temp=a[i]-k;
        if(temp<=0){
            temp=0;
        }
        a[i]=temp+a[i+1];
        a[i+1]=a[i];
    }
    printf("%d\n", temp);
    }

    return 0;
}


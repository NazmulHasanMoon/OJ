#include<stdio.h>
int main()
{
    int i,j,k,w;
    while(scanf("%d",&w)!=EOF)
    {
        if(w%2!=0||w==2)
            printf("NO\n");
        else{
            for(i=4;i<=100;i=i+2)
            {
                if(w==i){
                    printf("YES\n");
                    break;
                }

            }
        }
    }
    return 0;
}

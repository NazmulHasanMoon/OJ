#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define sz 200
char c[sz][sz],max[sz];
int main()
{
    int i,j,k,l,n,m;
    char mx='0';
    //while(scanf("%d %d",&n,&m)!=EOF)
    //{
        scanf("%d %d",&n,&m);
        getchar();
        k=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%c",&c[i][j]);
            }
            getchar();
        }
        for(i=0;i<m;i++)
        {
            mx='0';
            for(j=0;j<n;j++)
            {
                if(mx<c[j][i])
                    mx=c[j][i];
            }
            max[i]=mx;
        }
        for(i=0;i<n;i++)
        {
            l=0;
            for(j=0;j<m;j++)
            {
                if(c[i][j]==max[j]){
                    l++;
                   // printf("x[%d][%d]=%d\t",i,j,x[i][j]);
                }
            }
            //printf("\n");
            if(l>0)
                k++;
        }
        printf("%d\n",k);
    //}
    return 0;
}

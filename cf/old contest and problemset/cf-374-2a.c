#include<stdio.h>
#include<string.h>
#define sz 200
char c[sz];
int s[sz];
int main()
{
    int i,j,k,n,count;
    while(scanf("%d",&n)!=EOF)
    {
        //scanf("%d",&n);
        getchar();
        count=0;
        for(i=0,j=0;i<n;i++){
            scanf("%c",&c[i]);
            if(c[i]=='B'){
                count++;
            }
            else if(c[i]!='B')
            {
                if(count>0){
                    s[j]=count;
                    j++;
                    count=0;
                }
            }
        }
        if(c[n-1]=='B'){
            s[j]=count;
            j++;
        }
        printf("%d\n",j);
        for(i=0;i<j;i++){
            printf("%d",s[i]);
            if(i==j-1)
                printf("\n");
            else
                printf(" ");
        }
    }
    return 0;
}

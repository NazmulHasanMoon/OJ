#include<stdio.h>
int main()
{
    int i,j,k,n,m,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        k=n*m;
        /*if(n>1&&m>1){
            while(n!=1&&m!=1)
            {
                n=n-1;
                m=m-1;
                k++;
            }
        }
        if(n>1)
        {
            while(n!=1)
            {
                n=n-1;
                k++;
            }
        }
        if(m>1)
        {
            while(m!=1)
            {
                m=m-1;
                k++;
            }
        }*/
        if(k%2==0)
        {
            printf("Hasan\n");
        }
        else
            printf( "Hussain\n");
    }
    return 0;
}


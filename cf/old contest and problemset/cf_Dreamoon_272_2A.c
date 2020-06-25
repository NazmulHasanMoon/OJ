#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,m;
    double s,l;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(m<=n){
            i=1;
            s=ceil(n/2.0);
            k=(int)s;
            if(k%m==0)
                printf("%d\n",k);
            else{
                l=ceil(s/m);
                j=(int)l;
                printf("%d\n",j*m);
            }
        }
        else
            printf("-1\n");
    }
    return 0;
}

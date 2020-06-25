#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int x=(n>k)?1:0;

    int y=n-k;
    //printf("%d\n",y);
    if(k==0||k==n)
        printf("0 0\n");
    else
    {
        printf("%d ",x);
        if((k*2)>=y)
            printf("%d\n",y);
        else
        {
            while((k*2)<y)
                --y;
            //cout<<y<<endl;
            printf("%d\n",y);
        }
    }
    return 0;
}

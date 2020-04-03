#include<stdio.h>
int main()
{
    int T,i,L,W,H,V;
    scanf("%d",&T);
    for(i=1;i<=T&&T<=100;i++)
    {
        scanf("%d %d %d",&L,&W,&H);
        V=L*W*H;
        if(1<=L&&L<=50&&1<=W&&W<=50&&1<=H&&H<=50)
        {
            if(L<=20&&W<=20&&H<=20&&V<=8000)
            {
                printf("Case %d: good\n",i);
            }
            else
            {
                printf("Case %d: bad\n",i);
            }
        }
    }
    return 0;
}

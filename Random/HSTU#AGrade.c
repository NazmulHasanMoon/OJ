#include<stdio.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T&&T<100;i++)
    {
        int Term1,Term2,Final,Att,CT1,CT2,CT3;
        float X,Y;
        scanf("%d %d %d %d %d %d %d",&Term1,&Term2,&Final,&Att,&CT1,&CT2,&CT3);
        if((CT1>=CT2&&CT2>CT3)||(CT2>=CT1&&CT1>CT3))
        {
            Y=(CT1+CT2)/2;
            X=Term1+Term2+Final+Att+Y;
            if(X>=90)
            {
                printf("Case %d: A\n",i);
            }
            else if(X>=80&&X<90)
            {
                printf("Case %d: B\n",i);
            }
            else if(X>=70&&X<80)
            {
                printf("Case %d: C\n",i);
            }
            else if(X>=60&&X<70)
            {
                printf("Case %d: D\n",i);
            }
            else
            {
                printf("Case %d: F\n",i);
            }
        }
        else if((CT1>=CT3&&CT3>CT2)||(CT3>=CT1&&CT1>CT2))
        {
            Y=(CT1+CT3)/2;
            X=Term1+Term2+Final+Att+Y;
            if(X>=90)
            {
                printf("Case %d: A\n",i);
            }
            else if(X>=80&&X<90)
            {
                printf("Case %d: B\n",i);
            }
            else if(X>=70&&X<80)
            {
                printf("Case %d: C\n",i);
            }
            else if(X>=60&&X<70)
            {
                printf("Case %d: D\n",i);
            }
            else
            {
                printf("Case %d: F\n",i);
            }
        }
        else if((CT2>=CT3&&CT3>CT1)||(CT3>=CT2&&CT2>CT1))
        {
            Y=(CT2+CT3)/2;
            X=Term1+Term2+Final+Att+Y;
            if(X>=90)
            {
                printf("Case %d: A\n",i);
            }
            else if(X>=80&&X<90)
            {
                printf("Case %d: B\n",i);
            }
            else if(X>=70&&X<80)
            {
                printf("Case %d: C\n",i);
            }
            else if(X>=60&&X<70)
            {
                printf("Case %d: D\n",i);
            }
            else
            {
                printf("Case %d: F\n",i);
            }
        }
        else
        {
            Y=(CT1+CT2)/2;
            X=Term1+Term2+Final+Att+Y;
            if(X>=90)
            {
                printf("Case %d: A\n",i);
            }
            else if(X>=80&&X<90)
            {
                printf("Case %d: B\n",i);
            }
            else if(X>=70&&X<80)
            {
                printf("Case %d: C\n",i);
            }
            else if(X>=60&&X<70)
            {
                printf("Case %d: D\n",i);
            }
            else
            {
                printf("Case %d: F\n",i);
            }
        }
    }
    return 0;
}

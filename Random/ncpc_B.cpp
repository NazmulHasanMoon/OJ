#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define sz 13
#define ss 50
char ch[sz];
int main()
{
    int t,x;
    char c[ss][sz]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%s %d",ch,&x);
        for(int j=0,k=1;j<12;j++,k++)
        {
            if(strcmp(c[j],ch)==0)
            {
                if(k==1)
                    printf("Case %d: Pohela Falgun\n",i);
                else if(k==2)
                {
                    if(x<13)
                        printf("Case %d: Pohela Falgun\n",i);
                    else if(x==13)
                        printf("Case %d: Valentine's Day\n",i);
                    else if(x>=14&&x<21)
                        printf("Case %d: International Mother Language Day\n",i);
                    else
                        printf("Case %d: International Women's Day\n",i);
                }
                else if(k==3)
                {
                    if(x<8)
                        printf("Case %d: International Women's Day\n",i);
                    else if(x>=8&&x<21)
                        printf("Case %d: International Color Day\n",i);
                    else if(x>=21&&x<26)
                        printf("Case %d: Bangladesh Independence Day\n",i);
                    else
                        printf("Case %d: April Fools Day\n",i);
                }
                else if(k==4){
                    if(x<14)
                        printf("Case %d: Pohela Boishakh\n",i);
                    else
                        printf("Case %d: May Day\n",i);
                }
                else if(k==5)
                {
                    if(x>=1)
                        printf("Case %d: Father's Day\n",i);
                }
                else if(k==6)
                {
                    if(x<19)
                        printf("Case %d: Father's Day\n",i);
                    else
                        printf("Case %d: Mandela Day\n",i);
                }
                else if(k==7)
                {
                    if(x<18)
                        printf("Case %d: Mandela Day\n",i);
                    else
                        printf("Case %d: World Mosquito Day\n",i);
                }
                else if(k==8)
                {
                    if(x<20)
                        printf("Case %d: World Mosquito Day\n",i);
                    else
                        printf("Case %d: Halloween\n",i);
                }
                else if(k==9)
                    printf("Case %d: Halloween\n",i);
                else if(k==10){
                    if(x<31)
                        printf("Case %d: Halloween\n",i);
                    else
                        printf("Case %d: World Toilet Day\n",i);
                }
                else if(k==11)
                {
                    if(x<19)
                        printf("Case %d: World Toilet Day\n",i);
                    else
                        printf("Case %d: Human Rights Day\n",i);
                }
                else if(k==12)
                {
                    if(x<10)
                        printf("Case %d: Human Rights Day\n",i);
                    else if(x>=10&&x<16)
                        printf("Case %d: Victory Day of Bangladesh\n",i);
                    else if(x>=16&&x<25)
                        printf("Case %d: Christmas Day\n",i);
                    else
                        printf("Case %d: Pohela Falgun\n",i);
                }
                break;
            }
        }
    }
    return 0;
}

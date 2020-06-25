#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define sz 200001
#define ll long long
int main()
{
    int t;
    int a,b,c;
    sf("%d",&t);
    while(t--)
    {
        sf("%d %d %d",&a,&b,&c);
        while(b&&a>19)
        {
            a=a/2+10;
            b--;
        }
        ///pf("%d!!\n",a);
        while(a>9&&c)
        {
            a-=10;
            c--;
        }
        while(a>0&&b)
        {
            a=a/2+10;
            b--;
        }
        if(c||b)
            pf("Yes\n");
        else{
            if(a)
                pf("No\n");
            else
                pf("Yes\n");
        }
    }
    return 0;
}

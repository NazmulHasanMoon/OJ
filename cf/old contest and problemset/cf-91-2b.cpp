#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define sz 100
char c[sz];
int main()
{
    int x,y;
    x=y=0;
    scanf("%s",&c);
    for(int i=0;c[i];i++)
    {
        if(c[i]=='4')
            x++;
        else if(c[i]=='7')
            y++;
    }
    if(x||y)
    {
        if(x>=y)
            printf("4\n");
        else
            printf("7\n");
    }
    else
        printf("-1\n");
    return 0;
}

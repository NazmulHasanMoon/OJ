#include<iostream>
#include<cstdio>
#include<cstring>
#define sz 100005
using namespace std;
char c[sz];
int main()
{
    long int i,x,y,n;
    scanf("%ld",&n);
    getchar();
    x=y=0;
    for(i=0;i<n;i++)
    {
        scanf("%c",&c[i]);
        if(c[i]=='A')
            x++;
        else
            y++;
    }
    if(x>y)
        printf("Anton\n");
    else if(x<y)
        printf("Danik\n");
    else
        printf("Friendship\n");
    return 0;
}

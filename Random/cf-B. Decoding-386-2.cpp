#include<bits/stdc++.h>
#include<cstring>
#define sz 2002
using namespace std;
char c[sz],ch[sz];
int main()
{
    int n,x,y,z,p,i;
    scanf("%d",&n);
    n--;
    p=(n)/2;
    x=y=p;
    getchar();
    scanf("%s",c);
    ch[p]=c[0];
    i=1;
    while(n!=0)
    {
        n--;
        if(n%2==0){
            y++;
            p=y;
        }
        else
        {
            x--;
            p=x;
        }
        ch[p]=c[i];
        i++;
    }
    printf("%s\n",ch);
    return 0;
}

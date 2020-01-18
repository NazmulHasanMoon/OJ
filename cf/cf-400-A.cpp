#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define sp 1002
#define sz 3
#define ss 12
char c[sz][ss],ch[sp][sz][ss];
int main()
{
    int n;
    scanf("%s",ch[0][0]);
    getchar();
    scanf("%s",ch[0][1]);
    scanf("%d",&n);
    //printf("%s %s\n",ch[0],ch[1]);
    for(int i=1;i<=n;i++)
    {
        scanf("%s",c[0]);
        scanf("%s",c[1]);
        if(strcmp(ch[i-1][0],c[0])==0)
            strcat(ch[i][0],c[1]),strcat(ch[i][1],ch[i-1][1]);
        else if(strcmp(ch[i-1][0],c[1])==0)
            strcat(ch[i][0],c[0]),strcat(ch[i][1],ch[i-1][1]);
        else if(strcmp(ch[i-1][1],c[0])==0)
            strcat(ch[i][1],c[1]),strcat(ch[i][0],ch[i-1][0]);
        else if(strcmp(ch[i-1][1],c[1])==0)
            strcat(ch[i][1],c[0]),strcat(ch[i][0],ch[i-1][0]);
    }
    for(int i=0;i<=n;i++){
        printf("%s %s\n",ch[i][0],ch[i][1]);
    }
    return 0;
}

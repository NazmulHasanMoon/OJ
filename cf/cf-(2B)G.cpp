#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define sz 410
#define m 1000003
char ch[sz/4],ss[sz];
long long l,x;

int main()
{
    long long s(0);
    char c[9]="+-[]<>.,";
    scanf("%s",ch);
    l=strlen(ch)*4;
    l--;
    for(int i=0;ch[i];i++){
        if(ch[i]==c[0])
            strcat(ss,"1010");
        else if(ch[i]==c[1])
            strcat(ss,"1011");
        else if(ch[i]==c[2])
            strcat(ss,"1110");
        else if(ch[i]==c[3])
            strcat(ss,"1111");
        else if(ch[i]==c[4])
            strcat(ss,"1001");
        else if(ch[i]==c[5])
            strcat(ss,"1000");
        else if(ch[i]==c[6])
            strcat(ss,"1100");
        else if(ch[i]==c[7])
            strcat(ss,"1101");
    }
    x=1;
    for(int i=l;i>=0;i--,x*=2){
            x=(x%m);
            if(ss[i]=='1')
                s=(s%m+x%m)%m;
        //cout<<x<<" "<<s<<endl;
    }
    printf("%lld\n",s);
    return 0;
}

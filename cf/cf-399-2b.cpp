#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define sz 10000000
char c[sz],ch[sz],ss[sz];
int main()
{
    long long n,l,r,x,s(0),i(0);
    int re,p;
    scanf("%lld %lld %lld",&n,&l,&r);
    while(n!=0)
    {
        re=n%2;
        s++;
        n=n/2;
        if(n==1)
            break;
        ch[i++]=(char)re+48;
    }
    ch[i]='\0';
    strrev(ch);
    //cout<<s<<endl;
    int a,b,j;
    a=n;b=re;
    ss[0]=(char)a+48,ss[1]=(char)b+48,ss[2]=ss[0];
    for(j=0;j<2&&j<s;j++)
    {
        strcat(c,ss);
        p=strlen(c);
        c[p]=ch[j];
        //cout<<c<<endl;
    }

    if(s-2>0){
            s=s*2-2;
    int k;
    k=2;

        while(ch[j])
        {
            strcpy(ss,c);
            strcat(c,ss);
           /// cout<<c<<" "<<s<<endl;
            p=strlen(c);
            c[p-1]=ch[j];
            j++;
            //k+=2;
            //s-=k;
            //if(s<0)
               // break;
        }
        strcpy(ss,c);
        strcat(c,ss);
        p=strlen(c);
        c[p-1]='\0';
    }
    long long cn(0);
    for(long I=l-1;I<r;I++)
    {
        if(c[I]=='1')
            cn++;
    }
    //p=strlen(c);
    //c[p-1]='\0';
    ///cout<<c<<" "<<strlen(c)<<endl;
    cout<<cn<<endl;
    return 0;
}

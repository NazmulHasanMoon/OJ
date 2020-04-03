#include<bits/stdc++.h>
using namespace std;
int le(char *c,int i)
{
    if(c[i]=='\0')
        return i;
    return le(c,i+1);
}
char *cat(char *c,char *ch,int j,int st,int ed)
{
    if(st==ed){
        c[j]='\0';
        return c;
    }
    c[j]=ch[st];
    return cat(c,ch,j+1,st+1,ed);
}
char *cpy(char *c,char *ch,int i,int j)
{
    if(i==j)
    {
        ch[i]='\0';
        return ch;
    }
    ch[i]=c[i];
    return cpy(c,ch,i,j);
}
int main()
{
    char c[11],ch[11],cc[11];
    cin>>c>>ch;
    int x=le(c,0);
    int y=le(ch,0);
    cout<<cat(c,ch,x,0,y)<<endl;
    cc[0]='\0';
    string str=cpy(c,cc,0,x+y);
    cout<<str<<endl;
}

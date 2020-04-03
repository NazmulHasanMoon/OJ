#include<bits/stdc++.h>
using namespace std;
/*
//1st way:
char *rev(char *x,char *c,int i,int n)
{
    ///cout<<n<<' '<<x[i]<<'\n';
    if(n==0){
        c[i]=x[n];
        c[i+1]='\0';
        return c;
    }
    c[i]=x[n];
    c[i+1]='\0';
    ///cout<<c[i]<<' ';
    return rev(x,c,i+1,n-1);
    ///cout<<c<<endl;
}*/
void rev()
{
    char c;
    scanf("%c",&c);
    if(c=='\n')
        return ;
    rev();
    cout<<c;
}
int main()
{
    char n[100];
    rev();///<<endl;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
#define sz 100000002
char st[sz];
int main()
{
    cin>>st;
    int c(0),l=strlen(st);
    long int x(0);
    for(int i=0; i<l; i++)
    {
        //cout<<st[i]<<' ';
        if(st[i]!=0)
            c++;
        x=x*10+(int)(st[i]-48);
    }
    long int y=(((int)st[0]-48)+1);
    for(int i=0; i<l-1; i++)
        y=y*10;
    if(c<=1)
    {
        if(l==1)
            cout<<"1\n";
        else
            cout<<y-x<<endl;
    }
    else
    {
        //cout<<y<<' '<<x<<endl;
        cout<<y-x<<endl;
    }
    return 0;
}

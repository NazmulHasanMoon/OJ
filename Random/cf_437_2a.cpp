#include<bits/stdc++.h>
using namespace std;
#define sz 102
char c[sz];
int main()
{
    int n,x,y,s,ss;
    x=y=-1;s=ss=0;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        if(c[i]=='F'&&x<0)
            x=i;
        else if(c[i]=='S'&&y<0)
            y=i;
    }
    for(int i=y;i<n-1;i++)
    {
        if(c[i]=='S'&&c[i+1]=='F')
            s++;
    }
    for(int i=x;i<n-1;i++)
    {
        if(c[i]=='F'&&c[i+1]=='S')
            ss++;
    }
    if(ss<s)
        cout<<"yes\n";
    else
        cout<<"no\n";
    return 0;
}

#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define pf printf
#define sf scanf
#define sz 5005
char c[sz];
int m[3];
int main()
{
    sf("%s",c);
    int x,y,i,s[3];
    for(int i=0;c[i];i++)
    {
        for(int j=0;j<3;j++)
            s[j]=m[j];
        if(c[i]=='b')
        {
            m[0]=s[0];
            m[1]=max(s[0]+1,s[1]+1);
            m[2]=s[2];
        }
        else
        {
            m[0]=max(s[1],s[0]+1);
            m[1]=s[1];
            m[2]=max(s[1]+1,s[2]+1);
        }
    }
    cout<<max(max(m[0],m[1]),m[2])<<endl;
    return 0;
}

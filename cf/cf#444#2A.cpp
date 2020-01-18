#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
#define sz 1000
char c[sz];
int main()
{
    sf("%s",c);
    int l=strlen(c);
    if(l>=7)
    {
        int i,s(0);
        bool t=0;
        for(i=l-1;i>=0;i--)
        {
            if(c[i]=='0')
                s++;
            if(s==6)
                break;
        }
        //cout<<i<<endl;
        for(int j=0;j<i;j++){
            if(c[j]=='1')
                t=1;
        }
        if(t)
            pf("yes\n");
        else
            pf("no\n");
    }
    else
        pf("no\n");
    return 0;
}

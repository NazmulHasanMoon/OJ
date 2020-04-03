#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,cs(1);
    cin>>T;
    bool ck;
    long long a,b,l,r;
    while(cs<=T)
    {

        string s;
        cin>>s>>b;
        l=s.size()-1;
        r=0;
        if(s[0]=='-')
            r=1;
        a=0;
        while(r<=l)
            a=(a*10+(s[r++]-'0'))%b;
        printf("Case %d: ",cs++);
        if(!a)
            printf("divisible\n");
        else
            printf("not divisible\n");

    }
    return 0;
}

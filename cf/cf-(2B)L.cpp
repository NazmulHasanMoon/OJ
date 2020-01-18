#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define sz 26
#define ss 1002
char c[ss],ch[ss];
int a[sz],b[sz];
int main()
{
    scanf("%s",c);
    getchar();
    int l,x,s(0),k(0);
    bool t(1);
    l=strlen(c);
    for(int i=0;i<l;i++)
    {
        x=(int)c[i];
       a[x-97]++;
       b[x-97]++;

    }

    scanf("%s",ch);
    getchar();
    l=strlen(ch);
    for(int i=0;i<l;i++){
       x=(int)ch[i];
       if(a[x-97])
            s++,a[x-97]--;
        if(b[x-97])
            k++;
    }
    if(s&&k==l)
        cout<<s<<endl;
    else
        cout<<"-1\n";
    return 0;
}

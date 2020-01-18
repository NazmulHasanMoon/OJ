#include<bits/stdc++.h>
#include<cstring>
#define sz 100
#define ss 26
using namespace std;
char c[sz];
int x[ss],s;
int main()
{
    scanf("%s",c);
    for(int i=0;i<strlen(c);i++)
    {
        x[c[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(x[i]>0)
            s++;
    }
    cout<<s<<endl;
    return 0;
}

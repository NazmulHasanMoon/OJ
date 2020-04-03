#include<bits/stdc++.h>
#include<cstring>
#include<cctype>
using namespace std;
#define pi acos(-1.0)
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 10005
#define ll long long
char c[sz];
int main()
{

    sf("%s",c);
    int l=strlen(c);
    pf("%s",c);
    for(int i=l-1;i>=0;i--)
        pf("%c",c[i]);
    pf("\n");
    return 0;
}

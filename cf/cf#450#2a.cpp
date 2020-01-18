#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 1000
typedef long long ll;
int main()
{
    int n,s,c,x,y;
    s=c=0;
    sf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sf("%d %d",&x,&y);
        if(x>0&&(y>=0||y<=0))
            s++;
        else
            c++;
    }
    if(c>1&&s>1)
        pf("no\n");
    else
        pf("yes\n");
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,s,r;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        s=c/4;
        r=b/2;
        if(s>r)
            s=r;
        if(s>a)
            s=a;
        cout<<s*7<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define sz 3000
int d[sz];
int main()
{
    int n,m;
    bool t(1);
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d",&d[i]);
        if(d[i]==1||d[i]==n)
            t=0;
    }
    if(!t)
        printf("NO\n");
    else
    {
        sort(d,d+m);
        int a,b,c;
        a=d[0];
        b=d[1];
        bool f(0);
        for(int i=2;i<m;i++)
        {
            if(d[i]==b+1&&b==a+1){
                f=1;
                break;
            }
            else
                a=b,b=d[i];
        }
        if(f)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}

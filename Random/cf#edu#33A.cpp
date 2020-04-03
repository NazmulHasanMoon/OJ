#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 102
int a[sz];
int main()
{
    int n;
    sf("%d",&n);
    for(int i=0;i<n;i++)
        sf("%d",&a[i]);
    if(a[0]==3)
        pf("NO\n");
    else
    {
        int x=3;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1&&x==3)
                x=2;
            else if(a[i]==1&&x==2)
                x=3;
            else if(a[i]==2&&x==1)
                x=3;
            else if(a[i]==2&&x==3)
                x=1;
            else if(a[i]==3&&x==1)
                x=2;
            else if(a[i]==3&&x==2)
                x=1;
            else if(a[i]==x)
            {
                pf("NO\n");
                return 0;
            }

        }
        pf("YES\n");
    }
    return 0;
}

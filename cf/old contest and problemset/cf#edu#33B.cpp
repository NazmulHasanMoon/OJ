#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100000
int a[sz];
int main()
{
    int n,x,j(0);
    sf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        double y=(pow(2.0,i)-1)*(pow(2.0,(i-1)));
        x=(int)y;
        if(x<y)
            x++;
        a[j++]=x;
        if(x>n)
            break;
    }
    for(int i=j-1;i>=0;i--)
    {
        if(n%a[i]==0){
            pf("%d\n",a[i]);
            return 0;
        }
    }
    return 0;
}

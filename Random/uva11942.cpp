#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int n;
    sf("%d",&n);
    pf("Lumberjacks:\n");
    while(n--)
    {
        int x,y,h,l;
        h=l=0;
        sf("%d",&x);
        for(int i=1;i<10;i++){
            sf("%d",&y);
            if(y>=x)
                h++;
            if(y<=x)
                l++;
            x=y;
        }
        if(h==9||l==9)
            pf("Ordered\n");
        else
            pf("Unordered\n");
    }
    return 0;
}
